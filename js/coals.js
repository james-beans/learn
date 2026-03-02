/**
 * Cinder Coals v2.7.1 "Pro-Classic"
 * The "Meta-Web" Virtual Browser Framework
 * Part of the Cinder SDK
 * * A full-featured virtual browser environment designed for Manjaro/Arch users.
 * Features: TOML Theme Engine, Advanced Tab Management, Omnibox, and Rescue Logic.
 */

import { parse } from 'https://esm.sh/smol-toml@1.6.0';

export async function ignite(config) {
  const launcher = document.getElementById(config.id);
  const userAgent = navigator.userAgent;

  // Environment Guard: Prevent execution in restricted or incompatible shells
  if (userAgent.includes("Min/")) {
    launcher.innerHTML = `
      <div style="color:#e74c3c; font-family:monospace; padding:20px; border:1px solid #e74c3c; border-radius:8px; background:rgba(231,76,60,0.1);">
        <b>COALS_CRITICAL_ERR:</b> Incompatible Browser Environment (Min/restricted).
      </div>`;
    return;
  }

  /**
   * Theme Engine: gatherCols
   * Scans the document for <style lang="cols"> and <link rel="stylesheet" href="*.cols">
   * Parses TOML configuration and converts it into CSS Variables for the iframe.
   */
  async function gatherCols() {
    let cssVars = "";
    
    const toCss = (obj) => {
      let css = "";
      for (const [section, values] of Object.entries(obj)) {
        if (typeof values !== 'object' || values === null) continue;
        for (const [key, val] of Object.entries(values)) {
          // Flatten TOML structure into --coals-section-key: value;
          css += `--coals-${section.toLowerCase()}-${key.toLowerCase()}: ${val};\n`;
        }
      }
      return css;
    };

    // Parse inline style tags
    document.querySelectorAll('style[lang="cols"]').forEach(tag => {
      try {
        const parsed = parse(tag.textContent);
        cssVars += toCss(parsed);
      } catch (e) {
        console.error("COALS_THEME_PARSE_ERR:", e);
      }
    });

    // Fetch and parse external .cols files
    const links = Array.from(document.querySelectorAll('link[rel="stylesheet"]'));
    for (const link of links) {
      if (link.href.endsWith('.cols')) {
        try {
          const resp = await fetch(link.href);
          if (!resp.ok) throw new Error(`HTTP ${resp.status}`);
          const text = await resp.text();
          cssVars += toCss(parse(text));
        } catch (e) {
          console.error(`COALS_THEME_FETCH_ERR [${link.href}]:`, e);
        }
      }
    }
    return cssVars;
  }

  // Pre-ignition setup
  const colsCssVariables = await gatherCols();

  let manifest;
  try {
    // Determine if pages is a raw JSON string, an object, or a URL
    if (typeof config.pages === 'string' && config.pages.trim().startsWith('{')) {
      manifest = JSON.parse(config.pages);
    } else if (typeof config.pages === 'object') {
      manifest = config.pages;
    } else {
      const resp = await fetch(config.pages);
      manifest = await resp.json();
    }

    if (!manifest.pages || manifest.pages.length === 0) {
      throw new Error("No pages defined in manifest.");
    }

    // Normalize paths for the address bar
    manifest.pages = manifest.pages.map(p => ({
      ...p,
      path: p.path || `coals://${p.name.toLowerCase().replace(/\s+/g, '-')}`
    }));
  } catch (e) {
    launcher.innerHTML = `
      <div style="color:#e74c3c; font-family:monospace; padding:20px;">
        <b>IGNITION_FAILURE:</b> ${e.message}
      </div>`;
    return;
  }

  /**
   * Main Launch Handler
   * Generates the virtual browser window
   */
  const handleLaunch = () => {
    const newWin = window.open("", "_blank");
    if (!newWin) {
      alert("Launch blocked! Please disable pop-up blockers for Coals.");
      return;
    }

    const bootHtml = `
    <!DOCTYPE html>
    <html lang="en">
    <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>${manifest.metadata.name} | Coals Engine</title>
      <style>
        :root {
          /* Default Dark Chromium/Adwaita Theme */
          --bg-main: #1e1e1e;
          --bg-toolbar: #2d2d2d;
          --bg-active-tab: #353535;
          --bg-address: #121212;
          --text-main: #e1e1e1;
          --text-dim: #9ea0a2;
          --accent: #16a085; /* Manjaro Green */
          --border: rgba(255,255,255,0.08);
          --radius: 8px;
          --font: ${config.theme?.font || '"Inter", "Segoe UI", Roboto, Helvetica, Arial, sans-serif'};

          /* User-defined TOML overrides */
          ${colsCssVariables}
        }

        * { box-sizing: border-box; }
        body, html { 
          margin: 0; 
          padding: 0; 
          height: 100%; 
          width: 100%; 
          overflow: hidden; 
          background: var(--bg-main); 
          font-family: var(--font);
          color: var(--text-main);
        }

        #browser-frame {
          display: flex;
          flex-direction: column;
          height: 100vh;
          width: 100vw;
        }

        /* Tabs Bar */
        #tabs-bar {
          height: 42px;
          background: var(--bg-main);
          display: flex;
          align-items: flex-end;
          padding: 0 10px;
          gap: 4px;
          -webkit-app-region: drag;
        }

        .tab {
          height: 34px;
          min-width: 160px;
          max-width: 240px;
          background: transparent;
          border-radius: 8px 8px 0 0;
          display: flex;
          align-items: center;
          padding: 0 12px;
          font-size: 12px;
          color: var(--text-dim);
          cursor: pointer;
          transition: background 0.2s, color 0.2s;
          position: relative;
          border: 1px solid transparent;
          border-bottom: none;
          user-select: none;
        }

        .tab:hover { background: rgba(255,255,255,0.05); color: var(--text-main); }

        .tab.active {
          background: var(--bg-toolbar);
          color: #fff;
          border-color: var(--border);
          z-index: 2;
        }

        .tab .close-icon {
          margin-left: auto;
          width: 16px;
          height: 16px;
          border-radius: 50%;
          display: flex;
          align-items: center;
          justify-content: center;
          font-size: 10px;
          opacity: 0;
          transition: opacity 0.2s;
        }

        .tab:hover .close-icon { opacity: 0.6; }
        .tab .close-icon:hover { background: rgba(255,255,255,0.2); opacity: 1; }

        /* Toolbar / Navigation */
        #toolbar {
          height: 48px;
          background: var(--bg-toolbar);
          display: flex;
          align-items: center;
          padding: 0 12px;
          gap: 12px;
          border-bottom: 1px solid var(--border);
          box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }

        .tool-btn {
          background: transparent;
          border: none;
          color: var(--text-main);
          width: 32px;
          height: 32px;
          border-radius: 50%;
          display: flex;
          align-items: center;
          justify-content: center;
          cursor: pointer;
          font-size: 16px;
          transition: background 0.2s;
        }

        .tool-btn:hover { background: rgba(255,255,255,0.1); }
        .tool-btn:active { background: rgba(255,255,255,0.2); }

        #address-container {
          flex: 1;
          height: 32px;
          background: var(--bg-address);
          border-radius: 16px;
          border: 1px solid var(--border);
          display: flex;
          align-items: center;
          padding: 0 15px;
          gap: 10px;
          cursor: text;
          transition: border-color 0.2s, box-shadow 0.2s;
        }

        #address-container:hover { border-color: var(--accent); }

        #address-url {
          font-family: 'JetBrains Mono', 'Fira Code', monospace;
          font-size: 13px;
          color: var(--text-main);
          white-space: nowrap;
          overflow: hidden;
          text-overflow: ellipsis;
          flex: 1;
        }

        .security-icon { font-size: 14px; color: var(--accent); }

        /* Viewport */
        #viewport-container {
          flex: 1;
          background: #fff;
          position: relative;
        }

        .web-view {
          position: absolute;
          top: 0;
          left: 0;
          width: 100%;
          height: 100%;
          border: none;
          display: none;
        }

        .web-view.active { display: block; }

        /* Omnibox / Search Overlay */
        #omnibox-overlay {
          display: none;
          position: fixed;
          top: 0;
          left: 0;
          width: 100%;
          height: 100%;
          background: rgba(0,0,0,0.4);
          z-index: 1000;
          backdrop-filter: blur(4px);
        }

        #omnibox-modal {
          width: 600px;
          margin: 15vh auto;
          background: var(--bg-toolbar);
          border-radius: 12px;
          border: 1px solid var(--border);
          box-shadow: 0 20px 40px rgba(0,0,0,0.4);
          overflow: hidden;
        }

        #omnibox-input {
          width: 100%;
          padding: 20px;
          background: var(--bg-address);
          border: none;
          color: #fff;
          font-family: var(--font);
          font-size: 16px;
          outline: none;
          border-bottom: 1px solid var(--border);
        }

        .search-hint {
          padding: 15px 20px;
          font-size: 12px;
          color: var(--text-dim);
          display: flex;
          align-items: center;
          gap: 10px;
        }

        /* Custom Scrollbar for Linux Users */
        ::-webkit-scrollbar { width: 8px; }
        ::-webkit-scrollbar-track { background: var(--bg-main); }
        ::-webkit-scrollbar-thumb { background: var(--bg-toolbar); border-radius: 4px; }
        ::-webkit-scrollbar-thumb:hover { background: var(--accent); }
      </style>
    </head>
    <body>

    <div id="browser-frame">
      <div id="tabs-bar">
        <div id="tabs-anchor" style="display:flex; gap:2px;"></div>
      </div>

      <div id="toolbar">
        <button class="tool-btn" id="btn-back" title="Back">⬅️</button>
        <button class="tool-btn" id="btn-forward" title="Forward">➡️</button>
        <button class="tool-btn" id="btn-refresh" title="Reload">🔄</button>
        
        <div id="address-container">
          <span class="security-icon">🔒</span>
          <div id="address-url">coals://home</div>
        </div>

        <button class="tool-btn" id="btn-rescue" title="Rescue (Open in External Browser)">🚀</button>
        <button class="tool-btn" id="btn-menu">⋮</button>
      </div>

      <div id="viewport-container"></div>
    </div>

    <!-- Search / Omnibox -->
    <div id="omnibox-overlay">
      <div id="omnibox-modal">
        <input type="text" id="omnibox-input" placeholder="Type a URL or search Google...">
        <div class="search-hint">
          <span>💡</span> 
          <span>Press <b>Enter</b> to navigate. Supports <b>http/https</b> and <b>coals://</b> protocols.</span>
        </div>
      </div>
    </div>

    <script>
      const manifest = ${JSON.stringify(manifest)};
      let activeIndex = 0;
      let historyState = [];

      const tabsAnchor = document.getElementById('tabs-anchor');
      const viewport = document.getElementById('viewport-container');
      const addressUrl = document.getElementById('address-url');
      const omniboxOverlay = document.getElementById('omnibox-overlay');
      const omniboxInput = document.getElementById('omnibox-input');

      /**
       * Core UI Synchronization
       */
      function updateUI() {
        // Clear and rebuild tabs
        tabsAnchor.innerHTML = '';
        manifest.pages.forEach((page, i) => {
          const tab = document.createElement('div');
          tab.className = 'tab' + (i === activeIndex ? ' active' : '');
          tab.innerHTML = \`
            <span style="margin-right:8px;">\${page.icon || '🌐'}</span>
            <span style="white-space:nowrap; overflow:hidden;">\${page.name}</span>
            <div class="close-icon">&times;</div>
          \`;
          
          tab.onclick = () => switchTab(i);
          tabsAnchor.appendChild(tab);
        });

        // Toggle visibility of iframes
        const frames = document.querySelectorAll('.web-view');
        frames.forEach((f, i) => {
          f.classList.toggle('active', i === activeIndex);
          if (i === activeIndex) {
            addressUrl.innerText = manifest.pages[i].path || manifest.pages[i].url;
          }
        });
      }

      function switchTab(index) {
        activeIndex = index;
        updateUI();
      }

      /**
       * Initialization: Create iframes
       */
      function init() {
        manifest.pages.forEach((page, i) => {
          const ifr = document.createElement('iframe');
          ifr.className = 'web-view';
          ifr.src = page.url;
          ifr.id = 'frame-' + i;
          ifr.setAttribute('sandbox', 'allow-forms allow-modals allow-popups allow-presentation allow-same-origin allow-scripts');
          viewport.appendChild(ifr);
        });
        updateUI();
      }

      /**
       * Omnibox Logic
       */
      document.getElementById('address-container').onclick = () => {
        omniboxOverlay.style.display = 'block';
        omniboxInput.value = addressUrl.innerText;
        omniboxInput.select();
        omniboxInput.focus();
      };

      omniboxOverlay.onclick = (e) => {
        if (e.target === omniboxOverlay) omniboxOverlay.style.display = 'none';
      };

      omniboxInput.onkeydown = (e) => {
        if (e.key === 'Enter') {
          const val = omniboxInput.value.trim();
          let targetUrl = val;

          // Logic: If it looks like a URL, go there. Otherwise, search Google.
          if (!val.startsWith('http') && !val.startsWith('coals://')) {
            if (val.includes('.') && !val.includes(' ')) {
              targetUrl = 'https://' + val;
            } else {
              targetUrl = 'https://www.google.com/search?q=' + encodeURIComponent(val);
            }
          }

          const currentFrame = document.querySelector('.web-view.active');
          if (currentFrame) {
            currentFrame.src = targetUrl;
            addressUrl.innerText = val;
            manifest.pages[activeIndex].name = "Loading...";
            updateUI();
          }

          omniboxOverlay.style.display = 'none';
        }
        if (e.key === 'Escape') omniboxOverlay.style.display = 'none';
      };

      /**
       * Toolbar Actions
       */
      document.getElementById('btn-refresh').onclick = () => {
        const activeFrame = document.querySelector('.web-view.active');
        activeFrame.src = activeFrame.src;
      };

      document.getElementById('btn-back').onclick = () => {
        const activeFrame = document.querySelector('.web-view.active');
        activeFrame.contentWindow.history.back();
      };

      document.getElementById('btn-forward').onclick = () => {
        const activeFrame = document.querySelector('.web-view.active');
        activeFrame.contentWindow.history.forward();
      };

      document.getElementById('btn-rescue').onclick = () => {
        const activeFrame = document.querySelector('.web-view.active');
        window.open(activeFrame.src, '_blank');
      };

      init();
    <\/script>
    </body>
    </html>
    `;

    newWin.document.open();
    newWin.document.write(bootHtml);
    newWin.document.close();
  };

  /**
   * Launcher UI (Host Page)
   */
  launcher.innerHTML = `
    <div style="
      font-family: 'Inter', sans-serif; 
      padding: 24px; 
      border: 1px solid rgba(0,0,0,0.1); 
      border-radius: 12px; 
      background: #ffffff; 
      box-shadow: 0 10px 30px rgba(0,0,0,0.05);
      display: inline-block;
      min-width: 320px;
    ">
      <div style="display:flex; align-items:center; gap:12px; margin-bottom:16px;">
        <div style="width:14px; height:14px; background:var(--accent, #16a085); border-radius:50%;"></div>
        <span style="font-weight:700; font-size:15px; letter-spacing:-0.5px; color:#1a1a1a;">COALS ENGINE v2.7.1</span>
      </div>
      
      <div style="font-size:13px; color:#666; line-height:1.5; margin-bottom:20px;">
        Classic Meta-Browser Core ignited. <br>
        Target: <code style="background:#f4f4f4; padding:2px 4px; border-radius:4px;">${manifest.metadata.name}</code>
      </div>

      <button id="ignite-trigger" style="
        width: 100%;
        background: #1a1a1a;
        color: white;
        border: none;
        padding: 12px 0;
        border-radius: 8px;
        font-weight: 600;
        font-size: 14px;
        cursor: pointer;
        transition: transform 0.1s, background 0.2s;
      ">
        Ignite Environment
      </button>
    </div>
  `;

  const trigger = document.getElementById('ignite-trigger');
  trigger.onmousedown = () => trigger.style.transform = "scale(0.98)";
  trigger.onmouseup = () => trigger.style.transform = "scale(1)";
  trigger.onclick = handleLaunch;
}

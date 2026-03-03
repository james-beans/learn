#pragma once

#include <iostream>

using std::cout;
using std::string;

namespace c {
  void n() {
    cout << '\n';
  }

  // 1: Just the number
  // Usage: c::section(2);
  inline void section(int num) {
    cout << "\n-- Section " << num << ":\n";
  }

  // 2: Number and a Title (The Overload)
  // Usage: c::section(2, "Assignment");
  inline void section(int num, string title) {
    cout << "\n-- Section " << num << " - " << title << ":\n";
  }

  // 3: Just a string title (If you ever need it)
  inline void section(string title) {
    cout << "\n-- Section " << title << ":\n";
  }
}

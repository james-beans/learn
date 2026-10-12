CXX ?= clang++
CXXFLAGS ?= -std=c++23

TARGETS = \
	dist/template \
	dist/hw \
	dist/vars \
	dist/const \
	dist/namespaces \
	dist/typedef \
	dist/arithmetic \
	dist/typeconversion \
	dist/input \
	dist/math \
	dist/ifc \
	dist/switch \
	dist/ternary \
	dist/operators \
	dist/string \
	dist/whilec \
	dist/forc \
	dist/loops \
	dist/random \
	dist/functions \
	dist/examples/functions/greetage \
	dist/returning \
	dist/arrays \
	dist/sizeof \
	dist/templates \
	dist/fill \
	dist/memory \
	dist/structs \
	dist/enums \
	dist/classes

.PHONY: all clean directories

all: directories $(TARGETS)
	@echo ""
	@echo "Compiled all programs."
	@echo ""

directories:
	@mkdir -p dist/examples/functions

clean:
	@echo "Safely removing existing 'dist' directory contents..."
	@find dist -mindepth 1 -delete 2>/dev/null || true
	@rmdir dist 2>/dev/null || true

dist/template: src/0_template.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/hw: src/hw.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/vars: src/vars.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/const: src/const.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/namespaces: src/namespaces.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/typedef: src/typedef.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/arithmetic: src/arithmetic.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/typeconversion: src/typeconversion.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/input: src/input.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/math: src/math.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/ifc: src/if.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/switch: src/switch.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/ternary: src/ternary.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/operators: src/operators.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/string: src/string.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/whilec: src/while.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/forc: src/for.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/loops: src/loops.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/random: src/random.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/functions: src/functions.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/examples/functions/greetage: src/examples/functions/greetage.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/returning: src/return.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/arrays: src/arrays.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/sizeof: src/sizeof.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/templates: src/templates.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/fill: src/fill.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/memory: src/memory.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/structs: src/structs.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/enums: src/enums.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

dist/classes: src/classes.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

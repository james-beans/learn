#!/usr/bin/env bash

n() {
  echo ""
}

compile() {
  # src/0_template.cpp
  clang++ -std=c++23 src/0_template.cpp -o dist/template

  # src/projects/0_template.cpp
  clang++ -std=c++23 src/projects/0_template.cpp -o dist/projects/template

  # src/hw.cpp
  clang++ -std=c++23 src/hw.cpp -o dist/hw

  # src/vars.cpp
  clang++ -std=c++23 src/vars.cpp -o dist/vars

  # src/const.cpp
  clang++ -std=c++23 src/const.cpp -o dist/const

  # src/namespaces.cpp
  clang++ -std=c++23 src/namespaces.cpp -o dist/namespaces

  # src/typedef.cpp
  clang++ -std=c++23 src/typedef.cpp -o dist/typedef

  # src/arithmetic.cpp
  clang++ -std=c++23 src/arithmetic.cpp -o dist/arithmetic

  # src/typeconversion.cpp
  clang++ -std=c++23 src/typeconversion.cpp -o dist/typeconversion

  # src/input.cpp
  clang++ -std=c++23 src/input.cpp -o dist/input

  # src/math.cpp
  clang++ -std=c++23 src/math.cpp -o dist/math

  # src/projects/hypotenuse.cpp
  clang++ -std=c++23 src/projects/hypotenuse.cpp -o dist/projects/hypotenuse

  # src/if.cpp
  clang++ -std=c++23 src/if.cpp -o dist/ifc

  # src/switch.cpp
  clang++ -std=c++23 src/switch.cpp -o dist/switch

  # src/projects/tcalc.cpp
  clang++ -std=c++23 src/projects/tcalc.cpp -o dist/projects/tcalc

  # src/ternary.cpp
  clang++ -std=c++23 src/ternary.cpp -o dist/ternary

  # src/operators.cpp
  clang++ -std=c++23 src/operators.cpp -o dist/operators

  # src/projects/convertemp.cpp
  clang++ -std=c++23 src/projects/convertemp.cpp -o dist/projects/convertemp

  # src/string.cpp
  clang++ -std=c++23 src/string.cpp -o dist/string

  # src/while.cpp
  clang++ -std=c++23 src/while.cpp -o dist/whilel

  # src/for.cpp
  clang++ -std=c++23 src/for.cpp -o dist/forl

  # src/loops.cpp
  clang++ -std=c++23 src/loops.cpp -o dist/loops

  # src/projects/rectangleloop.cpp
  clang++ -std=c++23 src/projects/rectangleloop.cpp -o dist/projects/rectangleloop

  # src/random.cpp
  clang++ -std=c++23 src/random.cpp -o dist/random

  # src/projects/reg.cpp
  clang++ -std=c++23 src/projects/reg.cpp -o dist/projects/reg

  # src/projects/gtn.cpp
  clang++ -std=c++23 src/projects/gtn.cpp -o dist/projects/gtn

  # src/functions.cpp
  clang++ -std=c++23 src/functions.cpp -o dist/functions

  # src/examples/functions/greetage.cpp
  clang++ -std=c++23 src/examples/functions/greetage.cpp -o dist/examples/functions/greetage

  # src/return.cpp
  clang++ -std=c++23 src/return.cpp -o dist/returning

  # src/projects/bp.cpp
  clang++ -std=c++23 src/projects/bp.cpp -o dist/projects/bp

  # src/projects/rps.cpp
  clang++ -std=c++23 src/projects/rps.cpp -o dist/projects/rps

  # src/arrays.cpp
  clang++ -std=c++23 src/arrays.cpp -o dist/arrays

  # src/sizeof.cpp
  clang++ -std=c++23 src/sizeof.cpp -o dist/sizeof

  n && echo "Compiled all programs." && n
}

main() {
  clear

  # Check if the 'dist' folder exists and then safely delete contents using find.
	if [ -d "dist" ]; then
	  echo "Safely removing existing 'dist' directory contents..."
	  # 1. Recursively delete everything *inside* the 'dist' directory.
	  #    -mindepth 1 ensures we only target contents, not 'dist' itself.
	  find dist -mindepth 1 -delete

	  # 2. Remove the now (hopefully) empty 'dist' directory using the safer rmdir.
	  #    The '|| true' ensures the script doesn't crash if rmdir fails (e.g., if files remain).
	  rmdir dist 2>/dev/null || true
  fi

  n

  # Make the dist directory
  mkdir -p dist
  mkdir -p dist/examples
  mkdir -p dist/projects

  mkdir -p dist/examples/functions

  compile 
}

main


#!/usr/bin/env bash

n() {
  echo ""
}

compile() {
  # src/hw.cpp
  clang++ src/hw.cpp -o dist/hw

  # src/hwcpp.cpp
  clang++ src/hwcpp.cpp -o dist/hwcpp

  # src/vars.cpp
  clang++ src/vars.cpp -o dist/vars

  # src/const.cpp
  clang++ src/const.cpp -o dist/const

  # src/namespaces.cpp
  clang++ src/namespaces.cpp -o dist/namespaces

  # src/typedef.cpp
  clang++ src/typedef.cpp -o dist/typedef

  # src/arithmetic.cpp
  clang++ src/arithmetic.cpp -o dist/arithmetic

  # src/typeconversion.cpp
  clang++ src/typeconversion.cpp -o dist/typeconversion

  # src/input.cpp
  clang++ src/input.cpp -o dist/input

  # src/math.cpp
  clang++ src/math.cpp -o dist/math

  # src/projects/hypotenuse.cpp
  clang++ src/projects/hypotenuse.cpp -o dist/projects/hypotenuse

  # src/if.cpp
  clang++ src/if.cpp -o dist/ifc

  # src/switch.cpp
  clang++ src/switch.cpp -o dist/switch

  # src/projects/tcalc.cpp
  clang++ src/projects/tcalc.cpp -o dist/projects/tcalc

  # src/ternary.cpp
  clang++ src/ternary.cpp -o dist/ternary

  # src/operators.cpp
  clang++ src/operators.cpp -o dist/operators

  # src/projects/convertemp.cpp
  clang++ src/projects/convertemp.cpp -o dist/projects/convertemp

  # src/string.cpp
  clang++ src/string.cpp -o dist/string

  # src/while.cpp
  clang++ src/while.cpp -o dist/whilel

  # src/for.cpp
  clang++ src/for.cpp -o dist/forl

  # src/loops.cpp
  clang++ src/loops.cpp -o dist/loops

  # src/projects/rectangleloop.cpp
  clang++ src/projects/rectangleloop.cpp -o dist/projects/rectangleloop

  # src/random.cpp
  clang++ src/random.cpp -o dist/random

  # src/projects/reg.cpp
  clang++ src/projects/reg.cpp -o dist/projects/reg

  # src/projects/gtn.cpp
  clang++ src/projects/gtn.cpp -o dist/projects/gtn

  # src/functions.cpp
  clang++ src/functions.cpp -o dist/functions

  # src/examples/functions/greetage.cpp
  clang++ src/examples/functions/greetage.cpp -o dist/examples/functions/greetage

  # src/return.cpp
  clang++ src/return.cpp -o dist/returning

  # src/projects/bp.cpp
  clang++ src/projects/bp.cpp -o dist/projects/bp

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


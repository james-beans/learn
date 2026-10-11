#!/usr/bin/env bash

n() { echo ""; }

compile() {
  # src/0_template.cpp
  clang++ -std=c++23 src/0_template.cpp -o dist/template

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

  # src/if.cpp
  clang++ -std=c++23 src/if.cpp -o dist/ifc

  # src/switch.cpp
  clang++ -std=c++23 src/switch.cpp -o dist/switch

  # src/ternary.cpp
  clang++ -std=c++23 src/ternary.cpp -o dist/ternary

  # src/operators.cpp
  clang++ -std=c++23 src/operators.cpp -o dist/operators

  # src/string.cpp
  clang++ -std=c++23 src/string.cpp -o dist/string

  # src/while.cpp
  clang++ -std=c++23 src/while.cpp -o dist/whilel

  # src/for.cpp
  clang++ -std=c++23 src/for.cpp -o dist/forl

  # src/loops.cpp
  clang++ -std=c++23 src/loops.cpp -o dist/loops

  # src/random.cpp
  clang++ -std=c++23 src/random.cpp -o dist/random

  # src/functions.cpp
  clang++ -std=c++23 src/functions.cpp -o dist/functions

  # src/examples/functions/greetage.cpp
  clang++ -std=c++23 src/examples/functions/greetage.cpp -o dist/examples/functions/greetage

  # src/return.cpp
  clang++ -std=c++23 src/return.cpp -o dist/returning

  # src/arrays.cpp
  clang++ -std=c++23 src/arrays.cpp -o dist/arrays

  # src/sizeof.cpp
  clang++ -std=c++23 src/sizeof.cpp -o dist/sizeof

  # src/templates.cpp
  clang++ -std=c++23 src/templates.cpp -o dist/templates

  # src/fill.cpp
  clang++ -std=c++23 src/fill.cpp -o dist/fill

  n && echo "Compiled all programs." && n
}

main() {
  clear

  # Check if the 'dist' folder exists and then safely delete contents using find.
  if [ -d "dist" ]; then
    echo "Safely removing existing 'dist' directory contents..."
    # Recursively delete everything *inside* the 'dist' directory.
    # -mindepth 1 ensures we only target contents, not 'dist' itself.
    find dist -mindepth 1 -delete

    # Remove the now (hopefully) empty 'dist' directory using the safer rmdir.
    # The '|| true' ensures the script doesn't crash if rmdir fails (e.g., if files remain).
    rmdir dist 2>/dev/null || true
  fi

  n

  # Make the dist directory
  mkdir -p dist
  mkdir -p dist/examples

  mkdir -p dist/examples/functions

  compile
}

main

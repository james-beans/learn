#!/usr/bin/env bash

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

  echo ""
  echo "Compiled all programs."
  echo ""
}

main() {
  clear

  # Make the dist directory
  mkdir -p dist
  mkdir -p dist/projects

  compile 
}

main


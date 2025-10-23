#!/usr/bin/env bash

compile() {
  # -- Basics:

  # src/hw.cpp
  clang++ src/hw.cpp -o dist/hw

  # src/vars.cpp
  clang++ src/vars.cpp -o dist/vars

  # src/const.cpp
  clang++ src/const.cpp -o dist/const

  # src/namespaces.cpp
  clang++ src/namespaces.cpp -o dist/namespaces

  echo "Compiled all programs."
  echo ""
}

main() {
  # Make the dist directory
  mkdir -p dist

  compile 
}

main


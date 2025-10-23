#include <iostream>

// Namespaces provide a solution for preventing
// name conflicts in large C++ projects. Each
// entity needs a unique name.
//
// A namespace allows for identically named
// entities as long as the namespaces are
// different.
namespace first {
  int x = 1;
}

namespace second {
  int x = 2;
}

int main() {
  // If using this:
  //
  //using namespace first;
  //using namespace second;
  //
  // It will assume that you are using that
  // namespace's functions and variables while
  // also removing the need for prefixing like
  // with:
  //
  // first::x
  // or
  // second::x
  //
  // For this reason, DO NOT import all of the
  // `std::` namespace because of naming conflicts.
  // Just use specific bits by importing them like this:
  using std::cout;

  int x = 0;

  // If you don't specifically state what
  // namespace to get the `x` variable from
  // it will just use the default main one.
  cout << "The original `x`: " << x << "\n";
  cout << "`first::x`: " << first::x << "\n";
  cout << "`second::x`: " << second::x << "\n";

  return 0;
}


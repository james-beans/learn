#include <iostream>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

int main() {
  // -- Section 1:
  section(1);

  /*
   * A memory address is a location in memory where data is stored.
   * A memory address can be accessed in C++ with `&` (address-of operator).
   */

  string name = "James";
  int age = 20;
  bool student = true;

  cout << &name << "\n";
  cout << &age << "\n";
  cout << &student << "\n";

  return 0;
}

// 01:20 - 26/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

#include "0_common.h"
using namespace c;

double square(double length) {
  return length * length;
}

double cube(double length) {
  return length * length * length;
}

string concatStrings(string st1, string st2) {
  return st1 + " " + st2;
}

int main() {
  // -- Section 1:
  section(1);

  /*
   * The return keyword will return a value
   * back to the spot where you called the
   * encompassing function.
   */

  double length = 5.0;
  double area = square(length);
  double volume = cube(length);

  cout << "Area: " << area << "cm^2\n";
  cout << "Volume: " << volume << "cm^3\n";

  n();

  string firstName = "James";
  string lastName = "Beans";

  string fullName = concatStrings(firstName, lastName);

  cout << "Hello, " << fullName << ".\n";

  return 0;
}

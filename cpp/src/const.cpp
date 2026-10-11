#include <iostream>

using std::cout;

#include "0_common.hpp"
using namespace c;

void printInfoA(string name, int age) {
  name = "none";
  age = 0;

  cout << name << "\n";
  cout << age << "\n";
}

void printInfoB(const string name, const int age) {
  // Calling these here right now will cause errors:
  // name = "none";
  // age = 0;

  cout << name << "\n";
  cout << age << "\n";
}

void printInfoC(const string& name, const int& age) {
  // Calling these here right now will cause errors:
  // name = "none";
  // age = 0;

  cout << name << "\n";
  cout << age << "\n";
}

int main() {
  // `const` makes it so that
  // people can't change the
  // value of the variable
  // later when using it in
  // the code.
  //
  // Constants use UPPERCASE
  // names as a standard. Not
  // lowercase names.
  const double PI = 3.14159;

  // -- Section 1:
  section(1);

  double radius = 10;
  double circumference = 2 * PI * radius;

  cout << circumference << "cm\n";

  // -- Section 2:
  section(2);

  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;

  cout << "The screen size may be " << WIDTH << " * " << HEIGHT << " .\n";

  // -- Section 2 - Assignment:
  section(2, "Assignment");

  const bool POWER = true;
  std::string powerstate;

  if (POWER == true) {
    // Power is on
    powerstate = "is";
  } else {
    // Power is off
    powerstate = "isn't";
  }

  cout << "The power in the building " << powerstate << " on.\n";

  // -- Section 3:
  section(3);

  /*
   * A `const` parameter is a parameter that is effectively a read-only
   * parameter for a function. This makes code more secure (within a function)
   * and conveys intent. Useful for references and pointers.
   */

  string name = "James";
  int age = 20;

  printInfoA(name, age);
  printInfoB(name, age);
  printInfoC(name, age);

  return 0;
}

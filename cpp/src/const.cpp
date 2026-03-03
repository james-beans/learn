// 00:50 - 24/10/25
// James-Beans - Learning C++

#include <iostream>

using std::cout;

#include "0_common.h"
using namespace c;

int main() {
  // const makes it so that
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

  return 0;
}

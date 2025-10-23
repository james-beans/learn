#include <iostream>

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
  std::cout << "\n-- Section 1:\n";

  double radius = 10;
  double circumference = 2 * PI * radius;

  std::cout << circumference << "cm\n";

  // -- Section 2:
  std::cout << "\n-- Section 2:\n";

  const int LIGHT_SPEED = 299792458;
  const int WIDTH = 1920;
  const int HEIGHT = 1080;

  std::cout << "The screen size may be " << WIDTH << " * " << HEIGHT << " .\n";

  // -- Section 2 - Assignment:
  std::cout << "\n-- Section 2 - Assignment:\n";

  const bool POWER = true;
  std::string powerstate;

  if (POWER == true) {
    // Power is on
    powerstate = "is";
  } else {
    // Power is off
    powerstate = "isn't";
  }

  std::cout << "The power in the building " << powerstate << " on.\n";

  return 0;
}


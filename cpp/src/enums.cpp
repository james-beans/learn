#include <iostream>
#include <string>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

enum Day {
  sunday = 0,
  monday = 1,
  tuesday = 2,
  wednesday = 3,
  thursday = 4,
  friday = 5,
  saturday = 6
};

enum class Color {
  red,
  green,
  blue
};

enum class TrafficLight {
  red,
  yellow,
  green
};

int main() {
  // -- Section 1:
  section(1);

  /*
   * `enum`s (enumerations) are user-defined types that consist
   * of paired named-integer constants. They are great if you
   * have a set of potential options.
   *
   * You can define `enum`s with an associated integer value like:
   * `enum Day {sunday = 0, monday};`
   * After the first value, they will keep going up by one every
   * time.
   *
   * To define a variable that uses an `enum` as its type you
   * would do:
   * `Type name = value;`
   */

  // This is more readable:

  Day today = monday;

  switch (today) {
    case sunday: {
      cout << "It is Sunday!\n";
      break;
    }
    case monday: {
      cout << "It is Monday!\n";
      break;
    }
    case tuesday: {
      cout << "It is Tuesday!\n";
      break;
    }
    case wednesday: {
      cout << "It is Wednesday!\n";
      break;
    }
    case thursday: {
      cout << "It is Thursday!\n";
      break;
    }
    case friday: {
      cout << "It is Friday!\n";
      break;
    }
    case saturday: {
      cout << "It is Saturday!\n";
      break;
    }
  }

  // Than this:

  Day tomorrow = tuesday;

  switch (tomorrow) {
    case 0: {
      cout << "It is Sunday!\n";
      break;
    }
    case 1: {
      cout << "It is Monday!\n";
      break;
    }
    case 2: {
      cout << "It is Tuesday!\n";
      break;
    }
    case 3: {
      cout << "It is Wednesday!\n";
      break;
    }
    case 4: {
      cout << "It is Thursday!\n";
      break;
    }
    case 5: {
      cout << "It is Friday!\n";
      break;
    }
    case 6: {
      cout << "It is Saturday!\n";
      break;
    }
  }

  // But both still would work fine.

  // -- Section 2:
  section(2);

  /*
   * Traditional C-style `enum`s (like `Day` above) have a few
   * flaws:
   * - Their names leak into the surrounding scope (you can't
   * have two `enum`s with a `red` option).
   * - They implicitly convert to integers, meaning you can
   * accidentally compare a `Day` to a `Color` or a random
   * number.
   *
   * Modern C++ introduced `enum class`es (scoped enums) to
   * fix this:
   * - You must use scope resolution (`Color::red`).
   * - They do NOT implicitly convert to integers.
   */

  Color paint = Color::red;
  TrafficLight light = TrafficLight::red;

  // This would throw a compilation error because they are
  // distinct types:
  // if (paint == light) { ... }

  switch (paint) {
    case Color::red: {
      cout << "The paint is red.\n";
      break;
    }

    case Color::green: {
      cout << "The paint is green.\n";
      break;
    }

    case Color::blue: {
      cout << "The paint is blue.\n";
      break;
    }
  }

  n();

  switch (light) {
    case TrafficLight::red: {
      cout << "The light is red.\n";
      break;
    }

    case TrafficLight::yellow: {
      cout << "The light is yellow.\n";
      break;
    }

    case TrafficLight::green: {
      cout << "The light is green.\n";
      break;
    }
  }

  return 0;
}

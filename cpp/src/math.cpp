// 01:45 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <cmath>

using std::cout;

// New math functions:

// `<iostream>` functions:
using std::max; // Maximum
using std::min; // Minimum

// `<cmath>` functions:
// `pow(a, b);` - a^b or a**b
// `sqrt(a);` - square root of a
// `abs(a)` - makes a positive
// `round(a)` - rounds a
// `ceil(a)` - rounds a up
// `floor(a)` - rounds a down

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  double x = 3.14;
  //double x = 3;
  double y = 4;
  double z;

  //z = max(x, y);
  //z = min(x, y);
  //z = pow(x, y);
  //z = sqrt(9);
  //z = abs(-3);
  //z = round(x);
  //z = ceil(x);
  z = floor(x);

  cout << z << '\n';

  return 0;
}


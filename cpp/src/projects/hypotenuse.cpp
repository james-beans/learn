// 02:10 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::cin;

void info() {
  /*
  * Right angled triangle
  * Solve for hypotenuse
  *
  * `c = sqrt(a^2 + b^2)`
  */

  cout << "Right angled triangle\n";
  cout << "`c = sqrt(a^2 + b^2)`\n\n";
}

void n() {
  cout << '\n';
}

int main() {
  info();

  double a;
  double b;
  double c;

  cout << "Enter side A: ";
  cin >> a;

  cout << "Enter side B: ";
  cin >> b;

  n();

  //c = sqrt(pow(a, 2) + pow(b, 2));
  a = pow(a, 2);
  b = pow(b, 2);
  c = sqrt(a + b);

  cout << "Solve for hypotenuse: " << c << '\n';

  return 0;
}


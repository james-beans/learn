// 05:25 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::cout;
using std::cin;

void n() {
  cout << '\n';
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /* - Arithmetic operators (maths)
   * are the result of a specific
   * arithmetic operation:
   * (`+`, `-`, `*`, `/`)
   *
   * example:
  
     double students = 20;

     students = students + 1;
     students += 1;
     students++;
  
     students = students - 1;
     students -= 1;
     students--;
  
     students = students * 2;
     students*=2;

     students = students / 3;
     students/=3;
  */

  /*
   * Comparison operators:
   * `<=` - less than or equal to
   * `<` - less than
   * `>` - greater than
   * `>=` - greater than or equal to
   * `==` - equal to
   * `=` - sets variable to
   */

  /* Logical Operators:
   * `&&` - Checks if two conditions are true to run
   * `||` - Check if at least one of two conditions is true
   * `!` - Reverses the logical state of its operand
   */

  double temp1;

  cout << "temp1: Enter the temperature: ";
  cin >> temp1;

  if (temp1 > 0 && temp1 < 30) {
    cout << "temp1: The temperature is good!\n";
  } else {
    cout << "temp1: The temperature is bad.\n";
  }

  n();

  double temp2;

  cout << "temp2: Enter the temperature: ";
  cin >> temp2;

  if (temp2 <= 0 || temp2 >= 30) {
    cout << "temp2: The temperature is bad.\n";
  } else {
    cout << "temp2: The temperature is good!\n";
  }

  n();

  bool sunny = true;

  // Or: `if (sunny == false)`
  if (!sunny) {
    cout << "It is cloudy outside.\n";
  } else {
    cout << "It is sunny outside!\n";
  }

  return 0;
}


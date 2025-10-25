// 02:35 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;
using std::cin;

void n() {
  cout << '\n';
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  // If statements are conditions to do a
  // piece of code if a condition is true.
  // If false or not true, then don't do it.

  int age;

  cout << "Enter your age: ";
  cin >> age;

  n();

  /*
   * Comparison operators:
   * `<=` - less than or equal to
   * `<` - less than
   * `>` - greater than
   * `>=` - greater than or equal to
   * `==` - equal to
   * `=` - sets variable to
   */
  if (age < 0) {
    cout << "You haven't been born yet.\n";
  } else if (age > 125) {
    cout << "Well done for living this much.\n";
    cout << "It's very impressive.\n\n";
    cout << "Welcome to the terminal.\n"; // Still let them in
  } else if (age >= 13) {
    cout << "Welcome to the terminal!\n";  
  } else {
    cout << "You are not old enough to enter!\n";
    cout << "Come back when you are old enough.\n";
  }

  return 0;
}


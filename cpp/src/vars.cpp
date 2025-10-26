// 01:50 - 26/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

int n2 = 3;

void printN1(int n1) {
  cout << n1 << '\n';
}

void printN2() {
  cout << n2 << '\n';
}

void n();

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  // Combine with: int x = 5;
  int x; // Declare a variable
  x = 5; // x = 5
  int y = 6;
  int sum = x + y; // sum = x + y

  cout << x << "\n"; // print(x, end="\n")
  cout << y << "\n";
  cout << sum << "\n";

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  // Types:
  // - integer (whole number)
  int age = 20;
  int year = 2025; 
  int days = 7;

  // - WARNING (clang++):
  // If you accidentally put a decimal in an int
  // the decimal will be removed completely without
  // rounding it. (truncated); e.g. 7.5 = 7
  int truncated = 7.5; // Intentional

  cout << truncated << "\n";

  // - double (number including decimal; similar to float or real)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;

  cout << price << "\n";

  // - char (stores a single character)
  char grade = 'A';
  char initial = 'B';
  char dollarSign = '$';

  cout << initial << "\n";

  // - WARNING (general):
  // If you try to put multiple characters
  // in a char it will error and only use the
  // last character and not the first character.
  // e.g. char initial = 'BC';
  char initial2 = 'BC'; // Intentional

  cout << initial2 << "\n";

  // - boolean (a variable that only has 2
  // states, true or false)
  bool student = false;
  bool power = true;
  bool forSale = true;

  // - string (objects that represent a
  // sequence of text; essentially just a
  // char variable but we can store more than
  // one character, even whole sentences like a
  // name or an address)
  string name = "James";
  string day = "Friday";
  string food = "Pizza";
  string address = "123 Fake St.";

  cout << name << "\n";
  cout << "Hello, " << name << "!\n";
  cout << "You are " << age << " years old.\n";

  // -- Section 2 - Assignment:
  cout << "\n-- Section 2 - Assignment:\n";

  int week = 7; // days
  double burger = 5.99;
  char falphabet = 'A';
  bool light = true; // lightswitch is turning the light: on
  string word = "the";

  string lightstate;

  if (light == true) {
    lightstate = "on";
  } else {
    lightstate = "off";
  }

  cout << "A week has " << week << " days in it.\n";
  cout << "A cost of a burger is $" << burger << " .\n";
  cout << "The first letter of the alphabet is the letter \"" << falphabet << "\".\n";
  cout << "The lights are currently " << lightstate << ".\n";
  cout << "The most commonly used English word is \"" << word << "\".\n";

  // -- Section 3:
  cout << "\n-- Section 3:\n";

  /*
   * - Local variables are declared inside a function or
   * block `{}`.
   * - Global variables are declared outside of all functions.
   *
   * It is safer to use local variables over global variables
   * to prevent polluting the global namespace. Also functions
   * can't see inside other functions so it will stop other
   * functions using the wrong variables accidently.
   *
   * To use the global variable instead of the local one if
   * needed, then prefix a variable with `::` like:
   * `::num`
   * Instead of just:
   * `num`
   */

  // Local variables example:
  int myN1 = 1;
  printN1(myN1);

  // Global variables example:
  printN2();

  return 0;
}

void n() {
  cout << '\n';
}


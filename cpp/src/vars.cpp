// 00:50 - 24/10/25
// James-Beans - Learning C++

#include <iostream>

int main() {
  // -- Section 1:
  std::cout << "\n-- Section 1:\n";

  // Combine with: int x = 5;
  int x; // Declare a variable
  x = 5; // x = 5
  int y = 6;
  int sum = x + y; // sum = x + y

  std::cout << x << "\n"; // print(x, end="\n")
  std::cout << y << "\n";
  std::cout << sum << "\n";

  // -- Section 2:
  std::cout << "\n-- Section 2:\n";

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

  std::cout << truncated << "\n";

  // - double (number including decimal; similar to float or real)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;

  std::cout << price << "\n";

  // - char (stores a single character)
  char grade = 'A';
  char initial = 'B';
  char dollarSign = '$';

  std::cout << initial << "\n";

  // - WARNING (general):
  // If you try to put multiple characters
  // in a char it will error and only use the
  // last character and not the first character.
  // e.g. char initial = 'BC';
  char initial2 = 'BC'; // Intentional

  std::cout << initial2 << "\n";

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
  std::string name = "James";
  std::string day = "Friday";
  std::string food = "Pizza";
  std::string address = "123 Fake St.";

  std::cout << name << "\n";
  std::cout << "Hello, " << name << "!\n";
  std::cout << "You are " << age << " years old.\n";

  // -- Section 2 - Assignment:
  std::cout << "\n-- Section 2 - Assignment:\n";

  int week = 7; // days
  double burger = 5.99;
  char falphabet = 'A';
  bool light = true; // lightswitch is turning the light: on
  std::string word = "the";

  std::string lightstate;

  if (light == true) {
    lightstate = "on";
  } else {
    lightstate = "off";
  }

  std::cout << "A week has " << week << " days in it.\n";
  std::cout << "A cost of a burger is $" << burger << " .\n";
  std::cout << "The first letter of the alphabet is the letter \"" << falphabet << "\".\n";
  std::cout << "The lights are currently " << lightstate << ".\n";
  std::cout << "The most commonly used English word is \"" << word << "\".\n";

  return 0;
}


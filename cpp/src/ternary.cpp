// 04:05 - 25/10/25
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

  // A ternary operator (`?:`) is a
  // replacement to an if/else if/else
  // statement.
  //
  // Example:
  // `condition ? expression1 : expression2;`

  int grade = 75;

  /*
   * DON'T WRITE:
   *
  if (grade >= 60) {
    cout << "You pass!\n";
  } else {
    cout << "You fail!\n";
  }
   *
   * write this instead:
  */
  grade >= 60 ? cout << "You pass!\n" : cout << "You fail!\n";

  n();

  int n1 = 5;
  n1 <= 10 ? cout << "Less than 10\n" : cout << "Greater than 10\n";

  int n2 = 9;
  n2 % 2 == 1 ? cout << "Odd\n" : cout << "Even\n";

  int n3 = 8;
  n3 % 2 ? cout << "Odd\n" : cout << "Even\n";

  n();

  bool hungry1 = true;
  hungry1 == true ? cout << "1: I'm very hungry right now...\n" : cout << "1: I don't need food right now.\n";

  bool hungry2 = false;
  hungry2 ? cout << "2: I'm very hungry right now...\n" : cout << "2: I don't need food right now.\n";

  bool hungry3 = true;
  cout << ( hungry3 ? "3: I'm very hungry right now...\n" : "3: I don't need food right now.\n");

  return 0;
}


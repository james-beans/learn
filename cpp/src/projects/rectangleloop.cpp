// 17:05 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;
using std::cin;

void n() {
  cout << '\n';
}

void info() {
  /*
  * rectangleloop - A program to make a rectangle out of characters and visualize it in math form.
  */

  cout << "rectangleloop - A program to make a rectangle out of characters and visualize it in math form.\n\n";
}

int main() {
  info();

  int rows;
  int columns;
  char symbol;

  cout << "How many rows? ";
  cin >> rows;

  cout << "How many columns? ";
  cin >> columns;

  n();

  cout << "What symbol should we use? ";
  cin >> symbol;

  n();

  int result = rows * columns;

  cout << rows << " * " << columns << " = " << result << "\n";

  n();

  // Do the counting 3 times in a row
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {
      // DO NOT ADD A `\n` HERE.
      // It will make every number be on a different line
      // which is what we don't want.
      cout << symbol;
    }
    n();
  }

  n();
  
  return 0;
}


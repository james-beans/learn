// 04:05 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <cmath>

using std::string;
using std::cout;
using std::cin;

void info() {
  /*
  * tcalc - A calculator in the terminal.
  */

  cout << "tcalc - A calculator in the terminal.\n\n";
}

int main() {
  info();

  char op;
  double num1;
  double num2;
  double result;

  cout << "Enter either (`+`, `-`, `*`, `/`): ";
  cin >> op;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  switch (op) {
    case '+':
      result = num1 + num2;
      cout << "\nResult: " << result << '\n';
      break;
    case '-':
      result = num1 - num2;
      cout << "\nResult: " << result << '\n';
      break;
    case '*':
      result = num1 * num2;
      cout << "\nResult: " << result << '\n';
      break;
    case '/':
      result = num1 / num2;
      cout << "\nResult: " << result << '\n';
      break;
    default:
      cout << "\nThe operator '" << op << "' doesn't count as an accepted operator.\n";
      return 1;
  }

  return 0;
}


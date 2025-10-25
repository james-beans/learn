// 03:45 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;
using std::cin;

void n() {
  cout << "\n";
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  int month;
  string monthName;

  cout << "Enter the month (1-12): ";
  cin >> month;

  n();

  /*
   * A switch statement is an alternative
   * to using many `if/else if/else` statements
   * and also compares one value against many
   * matching cases.
   *
   * DON'T MAKE CODE LIKE THIS:
   *
  if (month == 1) {
    cout << "It is January" << '\n';
  } else if (month == 2) {
    cout << "It is February" << '\n';
  } else if (month == 3) {
    cout << "It is March" << '\n';
  } else if (month == 4) {
    cout << "It is April" << '\n';
  } else if (month == 5) {
    cout << "It is May" << '\n';
  } else if (month == 6) {
    cout << "It is June" << '\n';
  } else if (month == 7) {
    cout << "It is July" << '\n';
  } else if (month == 8) {
    cout << "It is August" << '\n';
  } else if (month == 9) {
    cout << "It is September" << '\n';
  } else if (month == 10) {
    cout << "It is October" << '\n';
  } else if (month == 11) {
    cout << "It is November" << '\n';
  } else if (month == 12) {
    cout << "It is December" << '\n';
  } else {
    cout << "You didn't enter a number between 1-12.\n";
  }

   * 
   * Instead use a switch statement like this instead:
  */

  switch (month) {
    case 1:
      monthName = "January";
      break;
    case 2:
      monthName = "February";
      break;
    case 3:
      monthName = "March";
      break;
    case 4:
      monthName = "April";
      break;
    case 5:
      monthName = "May";
      break;
    case 6:
      monthName = "June";
      break;
    case 7:
      monthName = "July";
      break;
    case 8:
      monthName = "August";
      break;
    case 9:
      monthName = "September";
      break;
    case 10:
      monthName = "October";
      break;
    case 11:
      monthName = "November";
      break;
    case 12:
      monthName = "December";
      break;
    default:
      cout << "You didn't enter a number between 1-12." << '\n';
      return 1;
  }

  cout << "It is " << monthName << ".\n";

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  char grade;

  cout << "What letter grade did you get? ";
  cin >> grade;

  n();

  switch (grade) {
    case 'A':
      cout << "You did great!\n";
      break;
    case 'B':
      cout << "You did good.\n";
      break;
    case 'C':
      cout << "Great programming language,";
      cout << " okay grade.\n";
      cout << "You did okay.\n";
      break;
    case 'D':
      cout << "You passed.\n";
      break;
    case 'E':
      cout << "You barely passed.\n";
      break;
    case 'F':
      cout << "You failed.\n";
      break;
    default:
      cout << "You didn't enter a grade between A-F." << '\n';
      return 1;
  }

  return 0;
}


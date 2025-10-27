// 00:50 - 27/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

double getTotal(double prices[], int size) {
  double total = 0;

  for (int i = 0; i < size; i++) {
    total += prices[i];
  }

  return total;
}

void n();

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * An array is a data structure that can hold
   * multiple values that are accessed by an
   * index number. They are kind of like a
   * variable that holds multiple values.
   *
   * To define an array use this:
   * `type name[amount] = {value}`
   *
   * The value when defining an array is a list
   * of values accepted by the type and seperated
   * by commas `,`.
   */

  // This:
  string car = "BMW";
  cout << car << '\n';
  // Turns into this:
  string carlot[] = {"BMW"};
  cout << carlot[0] << "\n\n";

  /*
   * To get the value from an array you have
   * to use the index number. The first item
   * in a list is always the `0`th value. And
   * then it goes on as just normal counting
   * but minus 1 from every value your trying
   * to get.
   *
   * Its kind of like a parking lot. You use
   * the parking space (`[0]` for example) to
   * know what car your trying to get and if
   * you don't put the parking space then it
   * will print the location of the parking
   * lot (the memory address of the array)
   * instead.
   */

  string a[] = {"a", "b", "c", "d", "e"};
  cout << a << '\n'; // Print the address
  cout << a[0] << '\n'; // Print the first value
  cout << a[1] << '\n'; // Print the second value
  cout << a[2] << '\n'; // Print the third value
  cout << a[3] << '\n'; // Print the fourth value
  cout << a[4] << "\n\n"; // Print the fifth value
  // This can go on and on and on but I'm stopping it here so it doesn't take up the rest of the file.

  /*
   * Interestingly, because C++ is based of
   * C, when you have an array of the `char`
   * type and values with a null byte `\0`
   * at the end, it outputs a string of
   * the `char` values like they are a
   * combined string.
   *
   * This is because an array of `char`
   * values terminated by a null byte `\0`
   * is the fundamental way C-style strings
   * are represented in memory. C++ inherits
   * this convention from C. Functions and
   * operators designed to handle text, such
   * as the `<<` operator for output streams
   * (like `std::cout`), are specifically
   * programmed to treat a `char` array address
   * as the beginning of a string, printing
   * characters sequentially until the null
   * terminator is encountered. This makes
   * it appear as a single, combined string.
   *
   * Isn't that interesting?
   */

  char numbers[] = {'0', '1', '2', '3', '4', '\0'};
  cout << numbers << "\n\n"; // Print as a string

  /*
   * To change a value in an array use this:
   * `name[index] = value;`
   *
   * Imagine a car leaves a parking lot and
   * then another car fills the parking space
   * immediately quickly.
   */

  string carsa[] = {"Corvette", "Mustang", "Camry"};

  cout << carsa[0] << '\n';
  cout << carsa[1] << '\n';
  cout << carsa[2] << "\n\n";

  carsa[0] = "Camaro";

  cout << carsa[0] << '\n';
  cout << carsa[1] << '\n';
  cout << carsa[2] << "\n\n";

  /*
   * To define an array with no values in it
   * you have to put the index number of how
   * many values your going to put in it before
   * actually putting those values. Like this:
   * `type name[index];`
   */
  string carsb[3];

  carsb[0] = "Camaro";
  carsb[1] = "Mustang";
  carsb[2] = "BMW";

  cout << carsb[0] << '\n';
  cout << carsb[1] << '\n';
  cout << carsb[2] << "\n\n";

  // Array of prices:
  double prices[] = {5.00, 7.50, 9.99, 15.00};

  cout << prices[0] << '\n';
  cout << prices[1] << '\n';
  cout << prices[2] << '\n';
  cout << prices[3] << '\n';

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  /*
   * Iterating over arrays will tell us
   * what the value of every element is
   * without having to do it for only
   * one each time.
   */

  string students[] = {"Jim", "Bob", "Patick", "John"};

  // Normally:
  cout << students[0] << '\n';
  cout << students[1] << '\n';
  cout << students[2] << '\n';
  cout << students[3] << "\n\n";

  // For loop:
  int studentsElements = sizeof(students) / sizeof(string);

  for (int i = 0; i < studentsElements; i++) {
    cout << students[i] << '\n';
  }

  n();

  char grades[] = {'A', 'B', 'C', 'D', 'F'};

  // Normally:
  cout << grades[0] << '\n';
  cout << grades[1] << '\n';
  cout << grades[2] << '\n';
  cout << grades[3] << '\n';
  cout << grades[4] << "\n\n";

  // For loop:
  int gradesElements = sizeof(grades) / sizeof(char);

  for (int i = 0; i < gradesElements; i++) {
    cout << grades[i] << '\n';
  }

  // -- Section 3:
  cout << "\n-- Section 3:\n";

  double pricesf[] = {49.99, 15.05, 75, 9.99};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  cout << "$" << total << '\n';

  return 0;
}

void n() {
  cout << '\n';
}


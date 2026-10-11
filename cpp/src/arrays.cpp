#include <iostream>

using std::string;

using std::cin;
using std::cout;
using std::getline;

#include "0_common.h"
using namespace c;

double getTotal(double prices[], int size) {
  double total = 0;

  for (int i = 0; i < size; i++) { total += prices[i]; }

  return total;
}

int intSearchArray(int array[], int size, int element) {
  // Linear search
  for (int i = 0; i < size; i++) {
    if (array[i] == element) { return i; }
  }
  /*
   * In programming, -1 is a sentinel value.
   * If you see -1, or return it, it typically
   * means that something wasn't found.
   */
  return -1;
}

int stringSearchArray(string array[], int size, string element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) { return i; }
  }
  return -1;
}

void sorta(int array[], int size) {
  int temp;

  /*
   * The reason that the condition is size - 1
   * is because we don't need to compare the last
   * element to anything.
   *
   * The larger values will naturally gravitate
   * towards the end of the array.
   */
  for (int i = 0; i < size - 1; i++) {
    /*
     * Once we place the larger elements all the way to the right,
     * they should already be in order. We don't need to sort
     * any elements that are already sorted.
     */
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void sortd(int array[], int size) {
  int temp;

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] < array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  // -- Section 1:
  section(1);

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
  cout << a << '\n';      // Print the address
  cout << a[0] << '\n';   // Print the first value
  cout << a[1] << '\n';   // Print the second value
  cout << a[2] << '\n';   // Print the third value
  cout << a[3] << '\n';   // Print the fourth value
  cout << a[4] << "\n\n"; // Print the fifth value
  // This can go on and on and on but I'm stopping it here so it doesn't take up
  // the rest of the file.

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
  section(2);

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

  for (int i = 0; i < studentsElements; i++) { cout << students[i] << '\n'; }

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

  for (int i = 0; i < gradesElements; i++) { cout << grades[i] << '\n'; }

  // -- Section 3:
  section(3);

  double pricesf[] = {49.99, 15.05, 75, 9.99};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  cout << "$" << total << '\n';

  // -- Section 4:
  section(4);

  /*
   * This is technically a linear search.
   * - You begin at the first element of an array
   * - You check to see if the values are equal
   * - If they aren't equal, you move to the next element
   * Until you reach the end.
   */

  int numbersn[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sizen = sizeof(numbersn) / sizeof(numbersn[0]);
  int indexn;
  int myNum;

  cout << "Enter element to search for: ";
  cin >> myNum;

  // Clear the leftover newline character from the input buffer
  cin.ignore();

  indexn = intSearchArray(numbersn, sizen, myNum);

  if (indexn != -1) {
    cout << myNum << " is at index " << indexn << "\n";
  } else {
    cout << myNum << " is not in the array\n";
  }

  string foods[] = {"pizza", "hamburger", "hotdog"};
  int sizef = sizeof(foods) / sizeof(foods[0]);
  int indexf;
  string myFood;

  cout << "Enter element to search for: ";
  // Strings may contain spaces, so we use std::getline instead of std::cin
  getline(cin, myFood);

  indexf = stringSearchArray(foods, sizef, myFood);

  if (indexf != -1) {
    cout << myFood << " is at index " << indexf << "\n";
  } else {
    cout << myFood << " is not in the array\n";
  }

  // -- Section 5:
  section(5);

  /*
   * This is a simple bubble sorting algorithm.
   * It sorts through the numbers in order until they
   * reach a certain order pattern like ascending order
   * or decending order.
   *
   * There are more advanced and faster algorithms for
   * this task, but for simplicity we only do bubble
   * sort for now.
   */

  int sortList[] = {10, 7, 1, 5, 3, 8, 6, 2, 9, 4}; // Not in order on purpose
  int sizel = sizeof(sortList) / sizeof(sortList[0]);

  sorta(sortList, sizel);

  for (int element : sortList) { cout << element << " "; }

  n();

  sortd(sortList, sizel);

  for (int element : sortList) { cout << element << " "; }

  n();

  // -- Section 6:
  section(6);

  // Filling an array with user input
  // `foodsi` = foods input

  string foodsi[5];
  int sizei = sizeof(foodsi) / sizeof(foodsi[0]);

  for (int i = 0; i < sizei; i++) {
    cout << "Enter a food you like #" << i + 1 << ": ";
    getline(cin, foodsi[i]);
  }

  cout << "You like the following food:\n";

  for (string food : foodsi) { cout << food << "\n"; }

  n();

  string foodsi2[5];
  int sizei2 = sizeof(foodsi2) / sizeof(foodsi2[0]);
  string tempi;

  for (int i = 0; i < sizei2; i++) {
    cout << "Enter a food you like or 'q' to quit; #" << i + 1 << ": ";
    getline(cin, tempi);
    if (tempi == "q") {
      break;
    } else {
      foodsi2[i] = tempi;
    }
  }

  cout << "You like the following food:\n";

  // This for loop shouldn't display any elements that are empty
  for (int i = 0; !foodsi2[i].empty(); i++) { cout << foodsi2[i] << "\n"; }

  // -- Section 7:
  section(7);

  /*
   * 2D multidimensional arrays are just arrays where each element is
   * its own seperate array.
   *
   * 2D multidimensional arrays require 2 sets of square brackets
   * to initialize the array.
   *
   * `type name[][]`
   *
   * The first set of square brackets is for the number of rows.
   * The second set of square brackets is for the number of columns.
   * The amount of elements would be `rows * columns`.
   *
   * Row size is optional, column size is non-optional.
   */

  string cars[][3] = {{"Mustang", "Escape", "F-150"},
                      {"Corvette", "Equinox", "Silverado"},
                      {"Challenger", "Durango", "Ram 1500"}};

  cout << cars[0][0] << " ";
  cout << cars[0][1] << " ";
  cout << cars[0][2] << " ";

  n();

  cout << cars[1][0] << " ";
  cout << cars[1][1] << " ";
  cout << cars[1][2] << " ";

  n();

  cout << cars[2][0] << " ";
  cout << cars[2][1] << " ";
  cout << cars[2][2] << " ";

  n();

  int rows = sizeof(cars) / sizeof(cars[0]);
  int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

  // Print the memory addresses of each inner array
  for (int i = 0; i < rows; i++) { cout << "#" << i << " " << cars[i] << "\n"; }

  // To get the elements in each array
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) { cout << cars[i][j] << " "; }
    cout << "\n";
  }

  return 0;
}

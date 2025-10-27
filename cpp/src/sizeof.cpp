// 19:25 - 26/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * The sizeof operator determines the
   * size in bytes of a variable, data
   * type, class, object and more.
   */

  string name = "James"; // 32 bytes: stores the location to the actual string data
  double gpa = 2.5; // 8 bytes
  char grade = 'F'; // 1 byte: a single character
  bool student = true; // 1 byte: a single true/false value 

  cout << sizeof(name) << " bytes\n";
  cout << sizeof(gpa) << " bytes\n";
  cout << sizeof(grade) << " byte\n";
  cout << sizeof(student) << " byte\n\n";

  char grades[] = {'A', 'B', 'C', 'D', 'F'}; // 5 bytes: because the array stores only 5 single characters and one single character is 1 byte (5 * 1)
  string cars[] = {"Corvette", "Mustang", "Camry"};
  string students[] = {"Jim", "Bob", "Patick", "John"};

  cout << sizeof(grades) << " bytes\n";
  cout << sizeof(cars) << " bytes\n";
  cout << sizeof(students) << " bytes\n\n";

  /*
   * You can find the amount of elements
   * an array has by dividing the array
   * by the type of the array with the
   * `sizeof();` function encasing both
   * of them when being divided.
   * 
   * Here's an example:
   */
  cout << sizeof(grades) / sizeof(char) << " elements\n";
  cout << sizeof(cars) / sizeof(string) << " elements\n";
  cout << sizeof(students) / sizeof(string) << " elements\n";

  return 0;
}


// 22:10 - 03/03/26
// James-Beans - Learning C++

#include <iostream>

using std::cout;
using std::string;

#include "0_common.h"
using namespace c;

template <typename T>
T add(T a, T b) {
  return a + b;
}

template <int Multiplier>
int boost(int value) {
  return value * Multiplier;
}

int main() {
  // -- Section 1:
  section(1);

  /*
   * A template is a "blueprint" for a function.
   * Instead of writing separate functions for
   * 'int', 'double' or 'string', you use a
   * placeholder (usually 'T'). The compiler
   * generates the actual code for that specific
   * type the first time you call the function.
   *
   * "What is the difference between this and #define?"
   * Your function may expect a certain type like
   * 'int' for example, but your giving a 'float'
   * or a 'double' type. This would cause errors in
   * the compilation. But with templates, your
   * value in your function that it expects can be
   * automatically defined by the compiler.
   *
   * "What is the difference between this and auto?"
   * 'auto' is for variable declarations and to make
   * code more concise. It is NOT for generic function
   * blueprints.
   * - 'auto' is decided when you INITIALIZE a variable
   * (The compiler looks at the value you give it).
   * - templates are decided when you CALL a function
   *   (The compiler looks at the arguments you passed).
   *
   * NOTE: In modern C++, using 'auto' in a function argument
   * is just a "shortcut" for writing a template.
   *
   * The 'typename' keyword (or 'class') inside
   * the angle brackets < > tells the compiler
   * that the label following it represents
   * a generic data type.
   */

  cout << "Int addition: " << add(5, 10) << "\n";       // T becomes int
  cout << "Double addition: " << add(5.5, 2.2) << "\n"; // T becomes double

  string firstName = "James";
  string lastName = "Beans";
  cout << "String addition: " << add(firstName, lastName) << "\n";

  // -- Section 2 - Non-Type Parameters:
  section(2, "Value Templates");

  int health = 100;
  cout << "Boosted Health (x3): " << boost<3>(health) << "\n";

  // -- Section 3 - Auto vs Templates:
  section(3, "Auto vs Templates");

  // 'auto' is for initializing a specific variable:
  auto speed = 50;       // Compiler decides this is 'int'
  auto message = "Fast"; // Compiler decides this is 'const char*'

  // 'template' allows the function to ACCEPT anything:
  cout << "Adding auto variables: " << add(speed, 10) << "\n";

  // -- Section 4 - Manual Specification:
  section(4, "Manual Override");

  /*
   * Sometimes you want to force a specific type.
   * We use < > to tell the compiler exactly what T should be.
   */
  cout << "Forced double: " << add<double>(10, 5.5) << "\n";

  n();

  return 0;
}

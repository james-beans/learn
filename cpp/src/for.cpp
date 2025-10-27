// 00:30 - 27/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

void n();

namespace count {
  // Count - print (p)
  void p(int iterations, string msg, string end = "\n") {
    for (int i = 1; i <= iterations; i++) {
      cout << msg << end;
    }
  }

  // Count - print array (pa)
  void pa(int iterations, const auto array[], string end = "\n") {
    for (int i = 0; i < iterations; i++) {
      cout << array[i] << end;
    }
  }

  // Count - increase (i)
  void i(int start, int iterations, int up, string end = "\n") {
    for (int i = start; i <= iterations; i += up) {
      cout << i << end;
    }
  }

  // Count - decrease (d)
  void d(int start, int iterations, int down, string end = "\n") {
    for (int i = start; i >= iterations; i -= down) {
      cout << i << end;
    }
  }
}

namespace fe {
  void first() {
    // Normal way to do it using a for loop:
    string students[] = {"Jim", "Bob", "Patick", "John", "Rick"};

    /*
    for (int i = 0; i < sizeof(students)/sizeof(string); i++) {
      cout << students[i] << '\n';
    }
    */
    count::pa(sizeof(students)/sizeof(string), students);

    n();

    // Using a `foreach` loop:
    for (string student : students) {
      cout << student << '\n';
    }
  }

  void second() {
    // Normal way to do it using a for loop:
    int grades[] = {65, 72, 81, 93};

    /*
    for (int i = 0; i < sizeof(grades)/sizeof(int); i++) {
      cout << grades[i] << '\n';
    }
    */
    count::pa(sizeof(grades)/sizeof(int), grades);

    n();

    // Using a `foreach` loop:
    for (int grade : grades) {
      cout << grade << '\n';
    }
  }
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * For simplicity reasons, we are
   * using a seperate function for each
   * operation that includes the for loop.
   *
   * The implementations of those functions
   * are above in the `count::` name space.
   *
   * We will still keep the for loop implementation
   * base code without a function here in a comment
   * above the `count::` function version.
   */

  /*
  for (int i = 1; i <= 3; i++) {
    cout << "Happy new year!\n"; 
  }
  */
  count::p(3, "Happy new year!");

  n();

  /*
  for (int i = 1; i <= 5; i++) {
    cout << "Happy new year!\n"; 
  }
  */
  count::p(5, "Happy new year!");

  n();

  /*
  for (int i = 1; i <= 10; i++) {
    cout << i << '\n';
  }
  */
  count::i(1, 10, 1);

  n();

  /*
  for (int i = 0; i <= 10; i += 2) {
    cout << i << '\n';
  }
  */
  count::i(0, 10, 2);

  n();

  /*
  for (int i = 0; i <= 10; i += 3) {
    cout << i << '\n';
  }
  */
  count::i(0, 10, 3);
  
  n();

  /*
  for (int i = 10; i >= 0; i -= 2) {
    cout << i << '\n';
  }
  */
  count::d(10, 0, 1);

  n();

  /*
  for (int i = 10; i >= 0; i -= 2) {
    cout << i << '\n';
  }
  */
  count::d(10, 0, 2);

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  /*
   * A `foreach` loop is a loop that eases
   * the traversal over an iterable data set
   * (example: array).
   */

  fe::first();

  n();

  fe::second();

  return 0;
}

void n() {
  cout << '\n';
}


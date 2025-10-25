// 01:05 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::cout;

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";  

  // Type conversion (casting) is the conversion of a
  // value of one data type to another data type.
  //
  // Implicit = automatic
  // Explicit = Precede value with new data type (int)
  
  // Truncated decimal portion without conversion/cast
  // to a different type that supports decimals.
  double a = (int) 3.14;
  cout << a << '\n';

  char b = 100; // 100 in ASCII is 'd'
  cout << b << '\n';

  cout << (char) 100 << '\n';

  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;

  cout << score << "%\n";

  return 0;
}


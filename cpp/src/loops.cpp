// 17:05 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::cout;

void n() {
  cout << '\n';
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * There are multiple different types of loops.
   *
   * If you are looking for `for` loops go to: src/for.cpp
   * If you are looking for `while` loops go to: src/while.cpp
   */

  /*
   * `break;` - Will break out (stop) of a loop
   * `continue;` - Will skip the current iteration
   */

  // Stops the loop entirely when it gets to '3'
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      break;
    }
    cout << i << '\n';
  }

  n();

  // Skips printing '3' when it gets to it and continues on until '10'
  for (int i = 1; i <= 10; i++) {
    if (i == 3) {
      continue;
    }
    cout << i << '\n';
  }

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  /*
   * A nested loop is just a loop that's inside of another
   * loop. It doesn't matter what kind of loop you're working
   * with, it can be a `while` loop or a `for` loop.
   *
  loop () {
    loop () {
      // Execute instructions here
    }
  }
   *
   * It's a common convension to use the next available
   * letter in the alphabet if you are nesting loops that
   * both use indexes. So the inner loop (the nested one)
   * would have an index called `j` instead of `i` if it's
   * not taken already.
   */

  for (int i = 1; i <= 10; i++) {
    // DO NOT ADD A `\n` HERE.
    // It will make every number be on a different line
    // which is what we don't want.
    cout << i << ' ';
  }

  n();
  n();

  // Do the counting 3 times in a row
  for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 10; j++) {
      // DO NOT ADD A `\n` HERE.
      // It will make every number be on a different line
      // which is what we don't want.
      cout << j << ' ';
    }
    cout << '\n';
  }

  n();

  return 0;
}


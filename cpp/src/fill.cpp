#include <iostream>
#include <algorithm>

using std::string;

using std::cin;
using std::cout;
using std::fill;
using std::getline;

#include "0_common.hpp"
using namespace c;

int main() {
  // -- Section 1:
  section(1);

  /*
   * The `fill();` function fills a range
   * of elements with a specified value.
   *
   * `fill(begin, end, value);`
   */

  // This is manually without `fill();`
  string foods[5] = {"pizza", "pizza", "pizza", "pizza", "pizza"};

  for (string food : foods) { cout << food << "\n"; }

  n();

  string foods2[15];
  // If you set the value wrong for the `fill();` function's end, it will cause
  // a segmentation fault
  fill(foods2, foods2 + 15,
       "burger"); // Fills the whole array with 15 burger elements

  for (string food : foods2) { cout << food << "\n"; }

  n();

  const int SIZE3 = 20;
  string foods3[SIZE3];

  fill(foods3, foods3 + SIZE3, "hotdog");

  for (string food : foods3) { cout << food << "\n"; }

  n();

  const int SIZE4 = 10;
  string foods4[SIZE4];

  // Set half of them to toast, and half of them to beans
  fill(foods4, foods4 + (SIZE4 / 2), "toast");
  fill(foods4 + (SIZE4 / 2), foods4 + SIZE4, "beans");

  for (string food : foods4) { cout << food << "\n"; }

  n();

  const int SIZE5 = 15;
  string foods5[SIZE5];

  fill(foods5, foods5 + (SIZE5 / 3), "pizza");
  fill(foods5 + (SIZE5 / 3), foods5 + (SIZE5 / 3) * 2, "burger");
  fill(foods5 + (SIZE5 / 3) * 2, foods5 + SIZE5, "hotdog");

  for (string food : foods5) { cout << food << "\n"; }

  return 0;
}

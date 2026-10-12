#include <iostream>

using std::cout;

#include "0_common.hpp"
using namespace c;

// Aligns to 16 bytes
struct alignas(16) Test {
  int var1; // 4 bytes
  int var2; // 4 bytes

  // The rest of the 8 bytes are left unallocated, but assigned
  // to this specific Test `struct`.
};

int main() {
  // -- Section 1:
  section(1);

  /*
   * The `alignas()` function aligns:
   * - Declarations or definitions of a class
   * - Non-bit-field data members of a class or struct
   * - Variable declarations (except function parameters
   *   and exception parameters in catch blocks)
   * in memory.
   *
   * `alignas(bytes)`
   *
   * The `alignof()` function outputs the amount of
   * memory the declaration / definition is aligned
   * to.
   *
   * `alignof(x)`
   *
   * `alignof()` and `sizeof()` are the same if `alignas()`
   * was used as `alignas()` sets the memory alignment size
   * limit (how much memory that specific thing is allowed
   * to take in bytes).
   */

  cout << "alignof(Test): " << alignof(Test) << "\n"; // Outputs: 16
  cout << "sizeof(Test): " << sizeof(Test) << "\n";   // Outputs: 16

  n();

  Test x;

  cout << "alignof(Test.var1): " << alignof(x.var1) << "\n";
  cout << "sizeof(Test.var1): " << sizeof(x.var1) << "\n";

  n();

  cout << "alignof(Test.var2): " << alignof(x.var2) << "\n";
  cout << "sizeof(Test.var2): " << sizeof(x.var2) << "\n";

  return 0;
}

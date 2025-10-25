// 17:35 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <ctime>

using std::string;
using std::cout;
using std::cin;

namespace pr {
  int num(int a, int b, bool print = false, string end = "\n") {
    // PUT THIS ONLY AT THE START OF MAIN TO USE:
    // `srand(time(NULL));`
    // DO NOT ADD HERE OR ANYWHERE ELSE OTHERWISE
    // IT WILL CLASH WITH OTHER LIBRARIES/USES OF
    // THE SAME FUNCTION.

    // Generate random number in range [a, b]
    //
    //int res = (rand() % b) + a;
    int res = (rand() % (b - a + 1)) + a;

    if (print) {
      cout << res << end;
    }

    return res;
  }
}

void n() {
  cout << '\n';
}

int main() {
  srand(time(NULL));

  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * Pseudo-random is NOT truly random but very close
   * to an actual random value.
   *
   * For simplicity reasons, we are
   * using a seperate function that
   * includes the generation of the random number.
   *
   * The implementations of that function
   * is above in the `pr::` name space.
   */
  int x;

  x = pr::num(0, 5, true, " ");
  x = pr::num(0, 10, true, " ");
  x = pr::num(0, 15, true, " ");
  x = pr::num(0, 20, true, " ");
  x = pr::num(0, 25, true, " \n");

  n();

  x = pr::num(0, 5);
  cout << x << '\n';

  x = pr::num(0, 10);
  cout << x << '\n';

  x = pr::num(0, 15);
  cout << x << '\n';

  x = pr::num(0, 20);
  cout << x << '\n';

  x = pr::num(0, 25);
  cout << x << '\n';

  return 0;
}


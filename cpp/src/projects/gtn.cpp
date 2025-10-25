// 21:40 - 25/10/25
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

void info() {
  /*
  * GTN - Guess the number!
  */

  cout << "GTN - Guess the number!\n";
}

int main() {
  srand(time(NULL));
  info();

  int num = pr::num(1, 100);
  int guess = 0;
  int tries = 0;

  do {
    cout << "\nEnter a guess between (1-100): ";
    cin >> guess;
    tries++;

    if (guess > num) {
      cout << "Too high!\n";
    } else if (guess < num) {
      cout << "Too low!\n";
    } else {
      cout << "\nCorrect! You tried " << tries << " times.\n";
    }

  } while (guess != num);

  return 0;
}


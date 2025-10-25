// 21:30 - 25/10/25
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
  * REG - A random event generator for games and stories.
  */

  cout << "REG - A random event generator for games and stories.\n\n";
}

int main() {
  srand(time(NULL));
  info();

  int num = pr::num(1, 10);
  string event;

  switch (num) {
    case 1:
      event = "The sky turns a concerning shade of neon green.";
      break;
    case 2:
      event = "Gravity abruptly reverses for the next 60 seconds.";
      break;
    case 3:
      event = "A flock of sentient pigeons challenges you to a duel of wits.";
      break;
    case 4:
      event = "You briefly transform into a highly flammable rubber chicken.";
      break;
    case 5:
      event = "All non-essential doors in the vicinity spontaneously disappear.";
      break;
    case 6:
      event = "The ground beneath your feet begins singing a piercing Italian opera aria.";
      break;
    case 7:
      event = "Your entire inventory is instantly replaced by a large pile of mismatched socks.";
      break;
    case 8:
      event = "Time itself slows down to a quarter of its normal speed for one minute.";
      break;
    case 9:
      event = "A sudden, heavy rain of large, live fish begins falling from the clouds.";
      break;
    case 10:
      event = "You gain the temporary ability to hold meaningful conversations with inanimate objects.";
      break;
    default:
      event = "A very rare, non-chaotic event occurred. Nothing happened (luckily).";
      break;
  }

  cout << "Event: " << event << '\n';

  return 0;
}


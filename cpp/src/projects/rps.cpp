// 21:10 - 26/10/25
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

namespace rps {
  namespace winner {
    void r(char computer) {
      if (computer == 'r') {
        cout << "It's a tie!\n";
      } else if (computer == 'p') {
        cout << "You lose!\n";
      } else {
        cout << "You win!\n";
      }
    }

    void p(char computer) {
      if (computer == 'p') {
        cout << "It's a tie!\n";
      } else if (computer == 's') {
        cout << "You lose!\n";
      } else {
        cout << "You win!\n";
      }
    }

    void s(char computer) {
      if (computer == 's') {
        cout << "It's a tie!\n";
      } else if (computer == 'r') {
        cout << "You lose!\n";
      } else {
        cout << "You win!\n";
      }
    }
  }

  char getUserChoice() {
    char player;

    do {
      cout << "\n'r' for Rock\n";
      cout << "'p' for Paper\n";
      cout << "'s' for Scissors\n";

      cout << "\nYour choice: ";
      cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
  }

  char getComputerChoice() {
    int num = pr::num(1, 3);

    switch (num) {
      case 1: return 'r';
      case 2: return 'p';
      case 3: return 's';
      default: return '?';
    }
  }

  void showChoice(char choice) {
    switch (choice) {
      case 'r':
        cout << "Rock\n";
        break;
      case 'p':
        cout << "Paper\n";
        break;
      case 's':
        cout << "Scissors\n";
        break;
      default:
        break;
    }
  }

  void chooseWinner(char player, char computer) {
    switch (player) {
      case 'r':
        winner::r(computer);
        break;
      case 'p':
        winner::p(computer);
        break;
      case 's':
        winner::s(computer);
        break;
    }
  }
}

void info() {
  /*
  * RPS - A Rock Paper Scissors written for the terminal.
  */

  cout << "RPS - A Rock Paper Scissors written for the terminal.\n";
}

void n();

int main() {
  srand(time(NULL));
  info();

  char player;
  char computer;

  player = rps::getUserChoice();

  cout << "You picked: ";
  rps::showChoice(player);

  n();

  computer = rps::getComputerChoice();
  cout << "Computer's choice: ";
  rps::showChoice(computer);

  rps::chooseWinner(player, computer);

  return 0;
}

void n() {
  cout << '\n';
}


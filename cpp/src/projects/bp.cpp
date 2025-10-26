// 19:05 - 26/10/25
// James-Beans - Learning C++

#include <iostream>
#include <iomanip>
#include <limits>

using std::setprecision;
using std::string;
using std::fixed;
using std::cout;
using std::cin;

namespace b {
  void info() {
    /*
    * BP - A Banking program in the terminal.
    */

    cout << "BP - A Banking program in the terminal.\n\n";
  }

  void showBalance(double balance) {
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << "\n\n";
  }

  double deposit() {
    double amount = 0;

    cout << "Enter amount to be deposited: ";

    if (!(cin >> amount)) {
			cout << "Invalid input. Please enter a valid number.\n\n";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
			return 0;
		}

    if (amount > 0) {
      return amount;
    } else {
      cout << "$" << amount << " is not a valid amount.\n\n";
      return 0;
    }
  }

  double withDraw(double balance) {
    double amount = 0;

    cout << "Enter amount to be withdrawn: ";
    cin >> amount;

    if (!(cin >> amount)) {
			cout << "Invalid input. Please enter a valid number.\n\n";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
			return 0;
		}

    if (amount > 0) {
      if (amount <= balance) {
        return amount;
      } else {
        cout << "You have insufficient funds to do that.\n\n";
        return 0;
      }
    } else {
      cout << "$" << amount << " is not a valid withdrawal amount.\n\n";
      return 0;
    }
  }
}

void n();

int main() {
  b::info();

  double balance = 0;
  int choice = 0;

  double depositAmount;
  double withdrawAmount;

  do { 
    cout << "1. Show Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";

    n();

    cout << "Selection: ";
    if (!(cin >> choice)) {
			cout << "Invalid selection. Please enter a number (1-4).\n";
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard bad input
			choice = 0; // Set to a default value
			n();
			continue; // Skip the switch and re-prompt the menu
		}

    switch (choice) {
      case 1:
        b::showBalance(balance);
        break;
      case 2:
        depositAmount = b::deposit();
        if (depositAmount > 0) {
          balance += depositAmount;
          b::showBalance(balance);
        }
        break;
      case 3:
        withdrawAmount = b::withDraw(balance);
        if (withdrawAmount > 0) {
          balance -= withdrawAmount;
          b::showBalance(balance);
        }
        break;
      case 4:
        cout << "\nThanks for visiting!\n";
        break;
      default:
        cout << "Invalid choice\n";
        break;
    }
  } while (choice != 4);

  return 0;
}

void n() {
  cout << '\n';
}


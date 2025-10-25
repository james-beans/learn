// 11:55 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::getline;
using std::string;
using std::cout;
using std::cin;
using std::ws;

void n() {
  cout << '\n';
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  string name;

  std::cout << "Enter your name: ";
  getline(cin >> ws, name);

  n();

  if (name.empty()) {
    cout << "You didn't enter your name.\n";
    return 1;
  }

  if (name.length() > 12) {
    cout << "Wow that's a very long name!\n";
  } else {
    cout << "Nice name!\n";
  }

  name.append("@Archlinux");
  cout << "Your username is now `" << name << "`.\n";

  name.clear();
  cout << "Hello, " << name << '\n';

  return 0;
}


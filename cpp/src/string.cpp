// 14:05 - 25/10/25
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

  if (name.empty()) {
    cout << "You didn't enter your name.\n";
    return 1;
  }

  if (name.length() > 12) {
    cout << "Wow that's a very long name!\n";
  } else {
    cout << "Nice name!\n";
  }

  n();

  name.append("@Archlinux");
  cout << "Your username is now `" << name << "`.\n";

  // String is essentially just an array of characters.
  // 0 is the first character, and then it goes up.
  cout << name.at(0) << '\n';

  // Add a character at any point in the string
  name.insert(0, "@");
  cout << name << '\n';

  // Find any specific characters at any point in a string
  cout << name.find('@') << '\n';

  // Remove amount of characters in string
  name.erase(0, 6);
  cout << name << '\n';

  name.clear();
  cout << "Hello, " << name << '\n';

  return 0;
}


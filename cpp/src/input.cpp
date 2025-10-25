// 01:05 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::getline; // Allows whitespaces in input from `cin`
using std::string;
using std::cout;
using std::cin; // Doesn't allow whitespaces in input by itself
using std::ws;

void n() {
  cout << '\n';
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";  

  // `std::cout <<` (`cout`) is the way to print (insertion operator)
  // `std::cin >>` (`cin`) is the way to take input (extraction operator)
  
  string name;
  int age;

  cout << "What's your full name? ";
  getline(cin >> ws, name); // `cin >> ws` will make sure there won't be any whitespaces before any user input
  //cout << "What's your full name? ";
  //cin >> name;

  cout << "How old are you? ";
  cin >> age;

  n();

  cout << "Hello, " << name << "!\n";
  cout << "You are " << age << " years old.\n";

  return 0;
}


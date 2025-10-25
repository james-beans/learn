// 23:55 - 25/10/25
// James-Beans - Learning C++
//
// This file comes from the `src/functions.cpp`
// file comment example. For more about functions,
// check that file (`src/functions.cpp`) instead.

#include <iostream>

using std::string;
using std::cout;

void greetage(string name = "user", int age = 20);

int main() {
  greetage("James", 20);
}

void greetage(string name, int age) {
  cout << "Hello, " << name << "!\n";
  cout << "You are " << age << " years old.\n";
}


// 20:50 - 23/10/25
// James-Beans - Learning C++

// Both versions work.
// This is the standard (way faster) C impl:
//
//#include <stdio.h>
//
//int main() {
//  printf("Hello, World!\n");
//  return 0;
//}
//
// This is the C++ impl without using a namespace (slower than C):

#include <iostream>
//using namespace std;

int main() {
//  cout << "Hello, World!" << endl;
//  std::cout << "Hello, World!" << std::endl;
  std::cout << "Hello, World!\n";
  return 0;
}


// 00:45 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::cout;

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  // Arithmetic operators (maths) are the result
  // of a specific arithmetic operation (`+`, `-`,
  // `*`, `/`).
  
  int students = 20;
  //double students = 20;

  int remainder = students % 3;

  //students = students + 1;
  //students += 1;
  //students++;
  
  //students = students - 1;
  //students -= 1;
  //students--;
  
  //students = students * 2;
  //students*=2;

  //students = students / 3;
  //students/=3;

  cout << students << '\n';
  cout << remainder << '\n';

  return 0;
}


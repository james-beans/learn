// 05:50 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;
using std::cin;

void n() {
  cout << '\n';
}

void info() {
  /*
  * convertemp - A program to convert Fahrenheit (°F) to Celsius (°C).
  */

  cout << "convertemp - A program to convert Fahrenheit (°F) to Celsius (°C).\n\n";
}

int main() {
  double temp;
  char unit;

  info();

  cout << "What unit would you like to convert to? (C/F) ";
  cin >> unit;

  if (unit == 'F' || unit == 'f') {
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    temp = (1.8 * temp) + 32.0;

    n();
    cout << "Temperature is: " << temp << "°F\n";
  } else if (unit == 'C' || unit == 'c') {
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temp;

    temp = (temp - 32) / 1.8;

    n();
    cout << "Temperature is: " << temp << "°C\n";
  } else {
    cout << "Please enter in only °C or °F.\n";
  }

  return 0;
}


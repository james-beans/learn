#include <iostream>
#include <string>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

struct Student {
  string name;
  double gpa;
  bool enrolled = true;
};

struct Car {
  string model;
  int year;
  string color;
};

void printCarc(Car car) {
  cout << &car << "\n";
  cout << car.model << "\n";
  cout << car.year << "\n";
  cout << car.color << "\n";
}

void printCaro(Car& car) {
  cout << &car << "\n";
  cout << car.model << "\n";
  cout << car.year << "\n";
  cout << car.color << "\n";
}

void paintCar(Car& car, string color) { car.color = color; }

int main() {
  // -- Section 1:
  section(1);

  /*
   * A `struct` is a structure that groups related variables under one
   * name. `struct`s can contain many different data types (string, int, etc.).
   *
   * Variables in a `struct` are known as "members".
   * Members can be accessed with `.` (the "class member access operator").
   *
   * Members can have default values.
   */

  Student student1;
  student1.name = "Spongebob";
  student1.gpa = 3.2;

  Student student2;
  student2.name = "Patrick";
  student2.gpa = 2.1;

  Student student3;
  student3.name = "Squidward";
  student3.gpa = 1.5;
  student3.enrolled = false;

  cout << student1.name << "\n";
  cout << student1.gpa << "\n";
  cout << student1.enrolled << "\n";

  n();

  cout << student2.name << "\n";
  cout << student2.gpa << "\n";
  cout << student2.enrolled << "\n";

  n();

  cout << student3.name << "\n";
  cout << student3.gpa << "\n";
  cout << student3.enrolled << "\n";

  // -- Section 2:
  section(2);

  Car car1;
  Car car2;

  car1.model = "Mustang";
  car1.year = 2020;
  car1.color = "red";

  car2.model = "Corvette";
  car2.year = 2025;
  car2.color = "blue";

  // Original 1
  cout << &car1 << "\n";
  printCarc(car1);
  printCaro(car1);

  n();

  // Painted 1
  paintCar(car1, "silver");

  cout << &car1 << "\n";
  printCarc(car1);
  printCaro(car1);

  n();

  // Original 2
  cout << &car2 << "\n";
  printCarc(car2);
  printCaro(car2);

  n();

  // Painted 2
  paintCar(car2, "gold");

  cout << &car2 << "\n";
  printCarc(car2);
  printCaro(car2);

  return 0;
}

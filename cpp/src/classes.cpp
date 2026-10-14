#include <iostream>
#include <string>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

class Human {
public:
  // Attributes
  string a_name = "Muhammad";
  string a_occupation = "none";
  int a_age = 0;

  // Methods
  void m_eat() { cout << a_name << " is eating.\n"; }
  void m_drink() { cout << a_name << " is drinking.\n"; }
  void m_laugh() { cout << a_name << " is laughing.\n"; }
  void m_sleep() { cout << a_name << " is sleeping.\n"; }
  void m_roll() { cout << a_name << " is rolling.\n"; }
};

class Car {
public:
  string a_make;
  string a_model;
  int a_year;
  string a_color;

  Car() {}

  Car(string make, string model, int year, string color) {
    this->a_make = make;
    this->a_model = model;
    this->a_year = year;
    this->a_color = color;
  }

  void m_accelerate() { cout << "You step on the gas!\n"; }
  void m_brake() { cout << "You step on the brakes!\n"; }
};

class Student {
public:
  string a_name;
  int a_age;
  double a_gpa;

  Student(string name, int age, double gpa) {
    this->a_name = name;
    this->a_age = age;
    this->a_gpa = gpa;
  }
};

class Pizza {
public:
  string a_topping1;
  string a_topping2;

  Pizza() {}

  Pizza(string topping1) { this->a_topping1 = topping1; }

  Pizza(string topping1, string topping2) {
    this->a_topping1 = topping1;
    this->a_topping2 = topping2;
  }
};

class Stove {
private:
  int a_temperature = 0;

public:
  int a_publicTemperature = 0;

  Stove() {}
  Stove(int temperature) { m_setTemperature(temperature); }

  int m_getTemperature() { return a_temperature; }

  // You can make safety checks inside of setters
  void m_setTemperature(int temperature) {
    if (temperature < 0) {
      this->a_temperature = 0;
    } else if (temperature >= 100) {
      this->a_temperature = 100;
    } else {
      this->a_temperature = temperature;
    }
  }
};

class Animal {
public:
  bool a_alive = true;

  void m_eat() { cout << "This animal is eating.\n"; }
};

class Monkey : public Animal {};

class Dog : public Animal {
public:
  void m_speak() { cout << "The dog goes woof!\n"; }
};

class Cat : public Animal {
public:
  void m_speak() { cout << "The cat goes meow!\n"; }
};

class Shape {
public:
  double a_area;
  double a_volume;
};

class Cube : public Shape {
public:
  double a_side;

  Cube(double side) {
    this->a_side = side;
    this->a_area = side * side * 6; // 6 sides to a cube
    this->a_volume = side * side * side;
  }
};

class Sphere : public Shape {
public:
  double a_radius;

  Sphere(double radius) {
    this->a_radius = radius;
    this->a_area = 4 * 3.14159 * (radius * radius);
    this->a_volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
  }
};

class Player {
public:
  string a_name;
  int a_level;
  const int a_id; // `const` attributes require an initializer list

  Player(string name, int level, int id) : a_name(name), a_level(level), a_id(id) {}
};

int main() {
  // -- Section 1:
  section(1);

  /*
   * Objects are collections of attributes and methods.
   * Attributes are characteristics of an object. Methods
   * are functions that an object can perform.
   *
   * A good example of an object would be to use objects
   * to mimic real world items (like a phone, book, dog, etc.).
   *
   * Objects in C++ are created from a `class` which acts as
   * a blue-print for an object.
   */

  Human hdefault;
  Human james;
  Human rick;

  james.a_name = "James";
  james.a_occupation = "computer science student";
  james.a_age = 20;

  rick.a_name = "Rick";
  rick.a_occupation = "scientist";
  rick.a_age = 40;

  cout << hdefault.a_name << "\n";
  cout << hdefault.a_occupation << "\n";
  cout << hdefault.a_age << "\n";

  n();

  cout << james.a_name << "\n";
  cout << james.a_occupation << "\n";
  cout << james.a_age << "\n";

  n();

  cout << rick.a_name << "\n";
  cout << rick.a_occupation << "\n";
  cout << rick.a_age << "\n";

  n();

  hdefault.m_eat();
  hdefault.m_drink();
  hdefault.m_laugh();
  hdefault.m_sleep();

  n();

  james.m_eat(); // nom nom
  james.m_drink();
  james.m_laugh();
  james.m_sleep();

  n();

  rick.m_eat();
  rick.m_drink();
  rick.m_laugh();
  rick.m_sleep();
  rick.m_roll();

  n();

  Car car;

  car.a_make = "Ford";
  car.a_model = "Mustang";
  car.a_year = 2024;
  car.a_color = "silver";

  cout << car.a_make << "\n";
  cout << car.a_model << "\n";
  cout << car.a_year << "\n";
  cout << car.a_color << "\n";

  n();

  car.m_accelerate();
  car.m_brake();

  // -- Section 2:
  section(2);

  /*
   * A constructor is a special method (function within a `class`) that
   * is automatically called when an object is instantiated (created).
   *
   * It is useful for assigning values to attributes as arguments.
   */

  Student sjames("James", 20, 4.22);
  Student spatrick("Patrick", 40, 1.5);

  cout << sjames.a_name << "\n";
  cout << sjames.a_age << "\n";
  cout << sjames.a_gpa << "\n";

  n();

  cout << spatrick.a_name << "\n";
  cout << spatrick.a_age << "\n";
  cout << spatrick.a_gpa << "\n";

  n();

  Car ccar("Chevy", "Corvette", 2020, "red");

  cout << ccar.a_make << "\n";
  cout << ccar.a_model << "\n";
  cout << ccar.a_year << "\n";
  cout << ccar.a_color << "\n";

  // -- Section 3:
  section(3);

  /*
   * An overloaded constructor is where you have multiple constructors
   * with the same name but different parameters.
   *
   * This allows for varying arguments when instantiating (creating)
   * an object.
   */

  Pizza pizza1("pepperoni");
  Pizza pizza2("mushrooms", "peppers");
  Pizza pizza3;

  cout << pizza1.a_topping1 << "\n";

  n();

  cout << pizza2.a_topping1 << "\n";
  cout << pizza2.a_topping2 << "\n";

  // -- Section 4:
  section(4);

  /*
   * Abstraction is where we hide any unnecessary data from outside a `class`.
   * Getters are functions that make private attributes readable.
   * Setters are functions that make private attributes writeable.
   */

  Stove stove;

  // Using a generic public variable (bad):
  cout << "The public temperature setting is: " << stove.a_publicTemperature << "\n";
  stove.a_publicTemperature = 1000000;
  cout << "The public temperature setting is: " << stove.a_publicTemperature << "\n";

  n();

  // Using a private variable with a getter and a setter (better):
  cout << "The private temperature setting is: " << stove.m_getTemperature() << "\n";
  stove.m_setTemperature(15); // Better
  cout << "The private temperature setting is: " << stove.m_getTemperature() << "\n";

  n();

  // Using a getter and setter with an internal limiter on the setter (best):
  cout << "The private temperature setting is: " << stove.m_getTemperature() << "\n";
  stove.m_setTemperature(100000); // Limits it to only 100 so it doesn't burn anything
  cout << "The private temperature setting is: " << stove.m_getTemperature() << "\n";

  n();

  // Starts the stove at a temperature of 15 safely using the setter
  // internally inside of the constructor:
  Stove stove2(15);

  cout << "The private temperature setting is: " << stove2.m_getTemperature() << "\n";

  // -- Section 5:
  section(5);

  /*
   * Inheritance is when a `class` can recieve attributes and methods from
   * another `class`.
   *
   * For example:
   * - A `class` of `Child` would inherit from a `Parent` `class`.
   *
   * This helps to reuse similar code found within multiple `class`es.
   */

  // Based off the original `Animal` `class`:
  Monkey monkey;

  cout << monkey.a_alive << "\n";
  monkey.m_eat();

  n();

  // Custom features added onto the `Animal` `class` using inheritance:
  Dog dog;
  Cat cat;

  cout << dog.a_alive << "\n";
  dog.m_eat();
  dog.m_speak();

  n();

  cout << cat.a_alive << "\n";
  cat.m_eat();
  cat.m_speak();

  n();

  Cube cube(10);
  Sphere sphere(10);

  cout << "Cube Area: " << cube.a_area << "cm\n";
  cout << "Cube Volume: " << cube.a_volume << "cm^3\n";

  n();

  cout << "Sphere Area: " << sphere.a_area << "cm\n";
  cout << "Sphere Volume: " << sphere.a_volume << "cm^3\n";

  // -- Section 6:
  section(6);

  /*
   * A member initializer list is a way to initialize `class` attributes
   * directly before the constructor body runs.
   *
   * `Name(args) : attribute(value), attribute(value) {}`
   *
   * It is used because:
   * - It initializes attributes instantly upon creation rather than
   *   default-initializing them and then assigning values inside the
   *   body.
   * - It is strictly required when initializing `const` attributes or
   *  reference variables `&` because they cannot be assigned to later.
   */

  Player pdefault("James", 15, 1);

  cout << "Name: " << pdefault.a_name << "\n";
  cout << "Level: " << pdefault.a_level << "\n";
  cout << "ID: " << pdefault.a_id << "\n";

  return 0;
}

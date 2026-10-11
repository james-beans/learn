#include <iostream>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

int main() {
  // -- Section 1:
  section(1);

  /*
   * A memory address is a location in memory where data is stored.
   * A memory address can be accessed in C++ with `&` (address-of operator).
   */

  string name = "James";
  int age = 20;
  bool student = true;

  cout << &name << "\n";
  cout << &age << "\n";
  cout << &student << "\n";

  // -- Section 2:
  section(2);

  /*
   * Pointers are variables that store a memory address of another variable.
   * The reason why pointers are used is because sometimes it's just easier
   * to work with an address.
   *
   * Pointers also use the `&` (address-of) and `*` (dereference) operators.
   * To create a pointer, it should be the same data type of what it is pointing
   * to.
   */

  string namep = "James";
  int agep = 20;
  string freePizzasp[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  string* p_name = &namep;
  int* p_age = &agep;
  string* p_freePizzas = freePizzasp; // Arrays don't need to use `&` as its already a memory address

  cout << p_name << "\n"; // Prints the memory address
  cout << *p_name << "\n"; // Prints the value of that pointer
  cout << p_age << "\n"; // Prints the memory address
  cout << *p_age << "\n"; // Prints the value of that pointer
  cout << p_freePizzas << "\n"; // Prints the memory address
  cout << *p_freePizzas << "\n"; // Prints the value of that pointer as the first element as its an array

  // -- Section 3:
  section(3);

  /*
   * A null value is a special value that means something has no value.
   * When a pointer is holding a null value, that means that pointer is not
   * pointing at anything (null pointer).
   *
   * `nullptr` is the keyword that represents a null pointer literal.
   * `null` is the keyword that represents a null value.
   *
   * `nullptr`s are helpful when determining if an address was successfully
   * assigned to a pointer.
   *
   * When using pointers, be careful that your code isn't dereferencing
   * null or pointing to free memory. This will cause undefined behaviour.
   */

  int x = 123;

  int* pointer1 = nullptr;
  int* pointer2 = nullptr;

  pointer1 = &x;
  // pointer2 = &x;

  if (pointer1 == nullptr) {
    cout << "1: address was not assigned\n";
    // Calling this will cause a segmentation fault:
    // cout << *pointer1 << "\n";
  } else {
    cout << "1: address was assigned\n";
    cout << *pointer1 << "\n";
  }

  if (pointer2 == nullptr) {
    cout << "2: address was not assigned\n";
    // Calling this will cause a segmentation fault:
    // cout << *pointer2 << "\n";
  } else {
    cout << "2: address was assigned\n";
    cout << *pointer2 << "\n";
  }

  return 0;
}

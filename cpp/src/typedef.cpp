// 00:25 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <vector>

using std::cout;
using std::string;

using std::vector;
using std::pair;

// typedef is a reserved keyword used to create
// an additional name (alias for another data type.
//
// It's a new identifier for an existing type.
// typedef helps with readability and reduces typos.
//
// It is a convention to put `_t` at the end of the
// typedef alias name to reduce issues with readability.
//
// typedef has mainly been more modernly replaced with
// the `using` keyword instead because of it working
// better with templates.
//
// It's best to only use when there is a clear benefit.
//
// THIS IS AN EXTREMELY ADVANCED EXAMPLE, DO NOT USE IT:
typedef vector<pair<string, int>> pairlist_t;

typedef string text_t; // string but more readable.
//typedef string s_t; // string but shorter.

//typedef int num_t; // int but more understandable.
typedef int number_t; // int but more readable.

using t_t = string; // string but shorter; text_t but shorter and also using the modern `using` keyword instead of `typedef`.
using n_t = int; // int but more understandable; number_t and num_t but shorter and more understandable.

// Assignment:
typedef unsigned int coun_t; // alias for representing the count of items in a collection.
//using count = unsigned int;

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  // Instead of writing:
  // `vector<pair<string, int>> pairlist;`
  // Just write:
  pairlist_t pairlist;

  // Instead of writing:
  // `string firstName = "James";`
  // Just write:
  // `s_t firstName = "James";`
  // Or:
  text_t firstName = "James";

  cout << firstName << '\n';

  // Instead of writing:
  // `int age = 20;`
  // Just write:
  // `num_t age = 20;`
  // Or:
  number_t age = 20;

  cout << age << '\n';

  // -- Section 1 - Assignment:
  cout << "\n-- Section 1 - Assignment:\n";

  // Instead of writing:
  // `unsigned int inventory_count = 50;`
  // Just write:
  coun_t inventory_count = 50;

  cout << "The inventory count is: " << inventory_count << '\n';
  cout << "Size of `coun_t`: " << sizeof(coun_t) << " bytes\n";

  return 0;
}


// 23:55 - 25/10/25
// James-Beans - Learning C++

#include <iostream>

using std::string;
using std::cout;

void happyBirthday(int age, string name = "you") {
  cout << "Happy Birthday to " << name << "!\n";
  cout << "Happy Birthday to " << name << "!\n";
  cout << "Happy Birthday dear " << name << "!\n";
  cout << "Happy Birthday to " << name << "!\n\n";
  cout << "You are " << age << " years old.\n";
}

int main() {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  /*
   * A function is a block of reusable code
   * that you might use multiple times.
   *
   * The `int main() {}` function is the
   * main function that gets ran when you
   * run an executable that has been compiled
   * from C/C++ code.
   *
   * To define a function:
   * `type name(args) { code }`
   *
   * When defining a function, `args` is optional
   * and doesn't need to be there unless you are
   * going to need external variables or things
   * passed in when the user runs the function.
   *
   * `args` is usually very similar to how you
   * would normally define variables but seperated with
   * commas `,` instead. If you want to make an argument
   * optional to use with a function when running, it has
   * to have a default value assigned to it. Do this by
   * doing ` = value` on the end of the name and then
   * again using commas `,` if you want more arguments.
   * You should only put the arguments that don't have
   * default values and are non-optional first in defining
   * otherwise you will have to put an empty value or
   * something in the argument that was supposed to be
   * optional but now isn't.
   *
   * Example of args and defining a function:
   *
   void greetage(string name = "user", int age = 20) {
     cout << "Hello, " << name << "!\n";
     cout << "You are " << age << " years old.\n";
   }
   *
   * To run/execute an external function:
   *
   name();
   */
   // Run a function with args like this:
   happyBirthday(20, "James");
  /*
   * External functions usually have to be put before
   * the functions where the external function is going
   * to be executed from otherwise the compiler isn't
   * going to be able to find the function declaration
   * without defining it without logic like this:
   * `type name(args);`
   * Then later after the function your trying to
   * execute the external function from you can put
   * the actual full logic like mentioned earlier.
   *
   * - Error (general):
   * Do not put the default options on the full logic
   * if you have defined it before putting the logic
   * seperately under the function that is being ran.
   *
   * Here is a full C++ file example of functions:
   *

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

   *
   */

  return 0;
}


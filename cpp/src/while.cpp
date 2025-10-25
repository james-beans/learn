// 15:00 - 25/10/25
// James-Beans - Learning C++

#include <iostream>
#include <string>

#include <chrono>
#include <thread>

using std::getline;
using std::string;
using std::cout;
using std::cin;

using std::this_thread::sleep_for;
using std::chrono::milliseconds;
using std::chrono::seconds;

void n() {
  cout << '\n';
}

void s(int ms) {
    // Pause the thread for 'ms' milliseconds
    sleep_for(milliseconds(ms));
}

int main(void) {
  // -- Section 1:
  cout << "\n-- Section 1:\n";

  string name;

  while (name.empty()) {
    cout << "Enter your name: ";
    getline(cin, name);
  }

  cout << "Hello, " << name << '\n';

  n();

  cout << "Waiting for 5 seconds...\n";
  s(5000);

  // Infinite while loop (no escape)
  /*
   while (1==1) {
     cout << "HELP! I'm stuck in an infinite loop!\n";
   }
   */
  // We do a timed loop here instead:
  
  // Get the starting time point
  auto start_time = std::chrono::steady_clock::now();
    
  // Define the target end time (Start time + 5 seconds)
  auto end_time = start_time + seconds(5);

  while (std::chrono::steady_clock::now() < end_time) {
    cout << "HELP! I'm stuck in an infinite loop!\n";
    s(100); // Prevent 100% CPU usage
  }

  // -- Section 2:
  cout << "\n-- Section 2:\n";

  /*
   * A `do while` loop does a block of code
   * first, then it repeats the block of code
   * again if the condition is true.
   */
  // When it reaches the while loop the value of
  // number is not 0, but rather the garbage value
  // `32559` or something else. This is due to
  // it using whatever junk data that happens to be
  // sitting in that memory location at that moment.
  //
  // This is known as an uninitialized variable.
  int number = 0;

  do {
    cout << "Enter a postitive #: ";
    cin >> number;
  } while (number < 0);

  cout << "The # is: " << number << '\n';

  return 0;
}


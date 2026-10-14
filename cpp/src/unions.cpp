#include <iostream>
#include <string>

using std::string;

using std::cout;

#include "0_common.hpp"
using namespace c;

union Statistics {
  int hp;
  double speed;
  char rank;
};

enum class RewardType {
  CASH,
  ITEM,
  EXPERIENCE
};

struct Reward {
  RewardType type;
  union {
    int cashAmount;
    int itemCode;
    long expPoints;
  };
};

void printReward(Reward reward) {
  switch (reward.type) {
    case RewardType::CASH: {
      cout << "Cash reward: $" << reward.cashAmount << "\n";
      break;
    }

    case RewardType::ITEM: {
      cout << "Item ID: " << reward.itemCode << "\n";
      break;
    }

    case RewardType::EXPERIENCE: {
      cout << "EXP points: " << reward.expPoints << "\n";
      break;
    }
  }
}

int main() {
  // -- Section 1:
  section(1);

  /*
   * A `union` is a user-defined type where all members share the same
   * memory location. This means that a `union` can only hold one of
   * its non-static data members at any given time.
   *
   * The size of a `union` is equal to the size of its largest member
   * (plus any padding).
   */

  Statistics s1;

  cout << "sizeof(Statistics): " << sizeof(Statistics) << " bytes\n";

  // -- Section 2:
  section(2);

  s1.hp = 100;
  cout << "Set hp to 100\n";
  cout << "s1.hp: " << s1.hp << "\n";

  n();

  // Assigning to a different member overwrites the shared memory
  s1.speed = 95.5;
  cout << "Set speed to 95.5\n";
  cout << "s1.speed: " << s1.speed << "\n";

  // WARNING: reading `hp` now returns garbage bits interpreted
  // as an `int` because the memory was overwritten by the `double`
  // representation.
  cout << "s1.hp (corrupted by speed): " << s1.hp << "\n";

  // -- Section 3:
  section(3);

  /*
   * Because unions do not remember which member was last written
   * to, we often wrap them inside a struct with an `enum`
   * (a "tagged union") so our program knows how to safely read
   * the active value.
   */

  Reward r1;
  r1.type = RewardType::CASH;
  r1.cashAmount = 500;

  Reward r2;
  r2.type = RewardType::ITEM;
  r2.itemCode = 4289;

  printReward(r1);
  printReward(r2);

  return 0;
}

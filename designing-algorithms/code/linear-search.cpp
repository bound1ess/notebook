#include <cstdio>
#include <vector>

inline bool search(const std::vector<int> &nums, int num) {
  // just keep iterating over all possible solutions
  // until we either find what we want or just run out of elements
  for (auto it = nums.begin(); it != nums.end(); ++it) {
    if (*it == num) {
      return true;
    }
  }

  return false;
}

int main() {
  printf("Hint: type -123 to stop listening for input.\n");

  int num;
  std::vector<int> nums;

  while (scanf("%d", &num) && num != -123) {
    nums.push_back(num);
  }

  printf("What element would you like to search for?\n");
  scanf("%d", &num);

  if (search(nums, num)) {
    printf("We found it!\n");
  } else {
    printf("There is no such element :(\n");
  }

  return 0;
}

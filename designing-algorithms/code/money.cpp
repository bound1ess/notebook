#include <cstdio>

const int N = 9;
const int units[N] = {5000, 1000, 500, 100, 50, 10, 5, 2, 1};
int usage[N];

int main() {
  int sum;
  scanf("%d", &sum);

  while (sum > 0) {
    int unit;

    for (int i = 0; i < N; ++i) {
      if (units[i] <= sum) {
        unit = i;
        break;
      }
    }

    sum -= units[unit];
    ++usage[unit];
  }

  for (int i = 0; i < N; ++i) {
    if (usage[i] > 0) {
      printf("%d: %d\n", units[i], usage[i]);
    }
  }

  return 0;
}

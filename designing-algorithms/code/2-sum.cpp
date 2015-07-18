#include <cstdio>

// this problem can also be solved in O(n log n) or even O(n) time

const int N = 10;
const int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main() {
  printf("Please enter sum:\n");

  int sum;
  scanf("%d", &sum);

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (arr[i] + arr[j] == sum) {
        printf("%d + %d\n", arr[i], arr[j]);
      }
    }
  }

  return 0;
}

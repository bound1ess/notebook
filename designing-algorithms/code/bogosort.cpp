#include <cstdio>
#include <random>
#include <algorithm>

using namespace std;

const int N = 10;
int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

inline int random_number(int low, int high) {
  random_device device;
  mt19937 engine(device());
  uniform_int_distribution<int> dist(low, high);

  return dist(engine);
}

inline void shuffle(int arr[], int n) {
  for (int i = n - 1; i > 0; --i) {
    int j = random_number(0, i);
    swap(arr[i], arr[j]);
  }
}

inline void dump(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    printf(i + 1 < n ? " " : "\n");
  }
}

inline bool is_sorted(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }

  return true;
}

int main() {
  int attempts, n = N;
  scanf("%d", &attempts);

  for (int i = 0; i < attempts; ++i) {
    if (i > 0 && is_sorted(arr, n)) {
      printf("Done!\n");
      break;
    }

    shuffle(arr, n);
    dump(arr, n);
  }

  return 0;
}

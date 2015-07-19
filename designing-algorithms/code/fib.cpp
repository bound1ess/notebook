#include <cstdio>
#include <ctime>
#include <map>

int fib(int n, std::map<int, int> &memo) {
  if (memo.find(n) != memo.end()) {
    return memo[n];
  }

  if (n < 3) {
    return memo[n] = 1;
  } else {
    return memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  std::map<int, int> memo;
  clock_t start = clock();

  printf("%d\n", fib(n, memo));
  printf("elapsed: %.6f\n", ((double) clock() - start) / CLOCKS_PER_SEC);
  return 0;
}

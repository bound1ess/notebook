#include <cstdio>

void merge_sort(int arr[], int l, int r);

int main() {
  int n;
  scanf("%d", &n);

  int* arr = new int[n];

  for (int i = 0; i < n; ++i) {
    scanf("%d", arr + i);
  }

  merge_sort(arr, 0, n - 1);

  for (int i = 0; i < n; ++i) {
    printf("%d", arr[i]);
    printf(i + 1 < n ? " " : "\n");
  }

  delete [] arr;
  return 0;
}

void merge_sort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int m = (l + r) >> 1;

  // divide
  merge_sort(arr, l, m);
  merge_sort(arr, m + 1, r);

  // conquer
  int i = l, j = m + 1, k = 0;
  int* aux = new int[r - l + 1];

  while (i <= m && j <= r) {
    if (arr[i] < arr[j]) {
      aux[k] = arr[i];
      ++i;
    } else {
      aux[k] = arr[j];
      ++j;
    }

    ++k;
  }

  for (int d = i; d <= m; ++d) {
    aux[k] = arr[d];
    ++k;
  }

  for (int d = j; d <= r; ++d) {
    aux[k] = arr[d];
    ++k;
  }

  for (int d = 0; d < k; ++d) {
    arr[l + d] = aux[d];
  }

  delete [] aux;
}

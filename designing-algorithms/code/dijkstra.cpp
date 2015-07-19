#include <cstdio>
#include <limits>

const int N = 5;

inline int max_int() {
  return std::numeric_limits<int>::max();
}

inline int min_dist(const int dist[], const bool spt[]) {
  int min = max_int(), index;

  for (int i = 0; i < N; ++i) {
    if ( ! spt[i] && dist[i] <= min) {
      min = dist[i], index = i;
    }
  }

  return index;
}

inline void dump(int dist[]) {
  for (int i = 0; i < N; ++i) {
    printf("The distance to the vertex %d from the source vertex is %d.\n", i, dist[i]);
  }
}

void dijkstra(const int graph[N][N], int u = 0) {
  int dist[N];
  bool spt[N];

  for (int i = 0; i < N; ++i) {
    spt[i] = false, dist[i] = max_int();
  }

  dist[u] = 0;

  for (int i = 0; i < N - 1; ++i) {
    int min = min_dist(dist, spt);
    spt[min] = true;

    for (int j = 0; j < N; ++j) {
      if ( ! spt[j] && graph[min][j] > 0 && dist[min] != max_int()) {
        if (dist[min] + graph[min][j] < dist[j]) {
          dist[j] = dist[min] + graph[min][j];
        }
      }
    }
  }

  dump(dist);
}

int main() {
  const int graph[N][N] = {
    0, 15, 3, 46, 11,
    7, 0, 3, 7, 2,
    89, 11, 0, 15, 2,
    19, 5, 67, 0, 51,
    99, 4, 8, 15, 0,
  };

  dijkstra(graph);
  return 0;
}

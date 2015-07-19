#include <cstdio>

// we have 8 vertices, entry and exit points
const int N = 8, ENTRY = 0, EXIT = 7;

bool visited[N], adj[N][N]; // simple adjacency matrix

inline void add_edge(int u, int v) {
  adj[u][v] = adj[v][u] = true;
}

inline void remove_edge(int u, int v) {
  adj[u][v] = adj[v][u] = false;
}

inline void clear_visited() {
  for (int i = 0; i < N; ++i) {
    visited[i] = false;
  }
}

bool solve_maze(int u) {
  if (visited[u]) {
    return false;
  } else {
    visited[u] = true;
  }

  if (u == EXIT) {
    return true;
  }

  for (int i = 0; i < N; ++i) {
    if (adj[u][i] && solve_maze(i)) {
      return true;
    }
  }

  return false;
}

int main() {
  // add edges
  add_edge(0, 1);
  add_edge(0, 2);
  add_edge(1, 3);
  add_edge(2, 4);
  add_edge(4, 5);
  add_edge(3, 5);
  add_edge(3, 2);
  add_edge(5, 6);
  add_edge(5, 7);

  printf(solve_maze(ENTRY) ? "There's a solution.\n" : "No solution :(\n");

  // now let's make it fail
  remove_edge(5, 7);
  clear_visited();

  printf(solve_maze(ENTRY) ? "There's a solution.\n" : "No solution :(\n");
  return 0;
}

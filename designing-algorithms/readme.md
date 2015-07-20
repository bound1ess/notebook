# Designing algorithms

```
An algorithm is a step-by-step procedure for solving a problem.
```

```
A paradigm is a very high level algorithm for solving a class of problems.
```

## Brute force

Want to find a solution? Try all possible ones!

Pros:
- easy and straightforward

Cons:
- usually very expensive (in terms of time complexity)

Examples:
- [linear (sequential) search](code/linear-search.cpp)
- [2-sum problem](code/2-sum.cpp)
- [factors of a given number](code/number-factors.cpp)

## Divide & Conquer

The main idea is breaking given problem into smaller subproblems.

Approach:
- break the problem into smaller units, they should be all of the same type and do not need
to overlap
- keep dividing until we reach trivial/base cases
- combine all solutions to solve the original problem

Examples:
- [merge sort](code/merge-sort.cpp)
- [quicksort](code/quicksort.cpp)

## Backtracking

This paradigm is used to solve problems with a large search space by systematically trying and eliminating all possibilities that cannot be completed to a correct solution.


Based on recursive DFS.

Examples:
- [find path through a maze](code/maze.cpp)

## Greedy

There are two basic ingredients every greedy algorithm has in common:

- *Greedy Choice Property*: from a local optimum we can reach a global optimum, without having to reconsider the decisions already taken.

- *Optimal Substructure Property*: the optimal solution to a problem can be determined from the optimal solutions to its subproblems.

Examples:
- [counting money](code/money.cpp)
- [Dijkstras shortest path algorithm](code/dijkstra.cpp)

## Dynamic Programming (DP)

D&C + memoization, basically.

Examples:
- [Fibonacci sequence](code/fib.cpp)

## Randomized algorithms

Such an algorithm uses a random number at least once to make a decision.

Examples:
- [bogosort (not kidding)](code/bogosort.cpp)

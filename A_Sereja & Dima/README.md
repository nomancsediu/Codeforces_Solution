# A - Sereja & Dima

## Problem Description
Sereja and Dima play a game with an array of numbers. They take turns (Sereja first) selecting either the first or last element from the remaining array, and add it to their score. They play optimally to maximize their own score. Determine the final scores of both players.

## Approach
1. Use a **deque** (double-ended queue) to efficiently remove elements from both ends
2. Implement a **greedy strategy**: each player picks the maximum of the two available ends
3. Alternate turns using a counter:
   - Odd turns: Sereja
   - Even turns: Dima
4. Continue until the deque is empty

**Why Greedy Works:** Each player maximizes their immediate gain at each turn, which is an optimal strategy for this type of game.

## Complexity Analysis
- **Time Complexity:** O(n) - Each element is processed exactly once
- **Space Complexity:** O(n) - We store the array in a deque

## Solutions
- [A_Sereja & Dima.cpp](A_Sereja%20%26%20Dima.cpp) - C++ solution

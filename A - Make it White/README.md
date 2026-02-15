# A - Make it White

## Problem Description
Given a string of 'W' and 'B' characters, find the minimum length substring that contains all black cells ('B'). The answer is the distance from the first 'B' to the last 'B' (inclusive).

## Approach
1. Find the index of the **first occurrence** of 'B' in the string
2. Find the index of the **last occurrence** of 'B' in the string
3. The answer is the distance: `last_index - first_index + 1`

This works because we need to cover all cells from the first black to the last black, and all characters in between will be included in that range.

## Complexity Analysis
- **Time Complexity:** O(n) - We scan the entire string once to find first and last occurrences
- **Space Complexity:** O(n) - We store the input string

## Solutions
- [A - Make it White.cpp](A%20-%20Make%20it%20White.cpp) - C++ solution
- [A - Make it White.py](A%20-%20Make%20it%20White.py) - Python solution

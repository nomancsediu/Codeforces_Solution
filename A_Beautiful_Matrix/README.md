# A - Beautiful Matrix

## Problem Description
Given a 5×5 matrix with exactly one cell containing 1 and all other cells containing 0, find the **minimum number of moves** needed to move the 1 to the center of the matrix (position [2][2]). Each move shifts the 1 to an adjacent cell (up, down, left, or right).

## Approach
1. Read the 5×5 matrix
2. Find the position (row, column) of the 1
3. Calculate the Manhattan distance from the 1's position to the center (2, 2):
   - Distance = `|row - 2| + |column - 2|`
4. Output this distance

**Key Insight:** The minimum number of moves to reach a target position is the Manhattan distance, since we can only move up/down/left/right (not diagonally).

## Complexity Analysis
- **Time Complexity:** O(1) - The matrix is always 5×5, so we process a constant number of cells
- **Space Complexity:** O(1) - We only store a fixed 5×5 matrix and a few variables

## Solutions
- [A_Beautiful_Matrix.cpp](A_Beautiful_Matrix.cpp) - C++ solution
- [A_Beautiful_Matrix.py](A_Beautiful_Matrix.py) - Python solution

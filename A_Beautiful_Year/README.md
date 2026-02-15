# A - Beautiful Year

## Problem Description
Find the first year greater than y that has all **distinct digits** (no digit appears more than once in the year).

## Approach
1. Start from `year = y + 1`
2. For each year:
   - Convert year to string
   - Sort the digits
   - Check if all digits are unique using `unique()` function
   - If all digits are distinct, return this year
3. Loop until we find a valid year

**Key Insight:** A year can be at most 4 digits (0-9999), so the search space is bounded. The next year with all unique digits will be found within a reasonable range.

## Complexity Analysis
- **Time Complexity:** O(k × d log d) where k is the number of iterations needed (bounded by ~9000) and d is the number of digits (≤4). Each iteration sorts the digits, taking O(d log d).
  - Effectively O(1) since k and d are constants
- **Space Complexity:** O(1) - Only need to store a few variables

## Solutions
- [A_Beautiful_Year.cpp](A_Beautiful_Year.cpp) - C++ solution
- [A_Beautiful_Year.py](A_Beautiful_Year.py) - Python solution

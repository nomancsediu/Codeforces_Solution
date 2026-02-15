# A - Sieve of Eratosthenes (67)

## Problem Description
Given t test cases, each containing a list of n numbers, determine if the number **67** appears in the list. Output "YES" if 67 is present, otherwise output "NO".

## Approach
1. Read the number of test cases t
2. For each test case:
   - Read n (the size of the list)
   - Read the list of n numbers
   - Check if 67 is present in the list
   - Output "YES" if found, "NO" otherwise
3. Repeat for all test cases

**Key Insight:** This is a simple membership checking problem. We iterate through the list and check if 67 exists in it.

## Complexity Analysis
- **Time Complexity:** O(n) per test case - We need to check each element in the list to find 67
- **Space Complexity:** O(n) - We store the input list

## Solutions
- [A_Sieve_of_Erato_67_henes.py](A_Sieve_of_Erato_67_henes.py) - Python solution

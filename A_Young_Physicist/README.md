# A - Young Physicist

## Problem Description
Given n forces in 3D space (x, y, z coordinates), determine if they are **in equilibrium**. Forces are in equilibrium if the sum of all forces equals zero (i.e., sum of all x-components = 0, sum of all y-components = 0, sum of all z-components = 0).

## Approach
1. **Sum all components separately:**
   - Calculate total sum of all x-coordinates
   - Calculate total sum of all y-coordinates
   - Calculate total sum of all z-coordinates
2. **Check equilibrium condition:**
   - If all three sums equal 0, output "YES"
   - Otherwise, output "NO"

**Key Insight:** Forces are in equilibrium if and only if their vector sum is zero. This requires all components to independently sum to zero.

## Complexity Analysis
- **Time Complexity:** O(n) - Single pass through all n forces
- **Space Complexity:** O(1) - Only need three variables to store sums (constant space)

## Solutions
- [A_Young_Physicist.cpp](A_Young_Physicist.cpp) - C++ solution
- [A_Young_Physicist.py](A_Young_Physicist.py) - Python solution

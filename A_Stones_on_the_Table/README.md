```markdown
# A - Stones on the Table

## Problem Description
Given a string of stones, count how many **consecutive pairs** of identical stones exist. Each pair of adjacent identical stones needs to be removed to clean the table.

## Approach
1. Read the input string
2. **Count consecutive pairs:**
   - Iterate through the string from index 0 to length-2
   - For each position i, compare character at position i with character at position i+1
   - If they are the same, increment the counter
3. Output the total count

**Key Insight:** We need to count the number of positions where a character is the same as the next character. This gives us the number of adjacent pairs that are identical.

## Complexity Analysis
- **Time Complexity:** O(n) where n is the length of the string. Single pass through the string.
- **Space Complexity:** O(1) - Only need a counter variable

## Solutions
- [A_Stones_on_the_Table.py](A_Stones_on_the_Table.py) - Python solution

```

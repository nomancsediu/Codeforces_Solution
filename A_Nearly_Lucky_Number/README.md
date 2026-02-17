```markdown
# A - Nearly Lucky Number

## Problem Description
A number is considered "lucky" if it contains only the digits 4 and 7. Given a number, check if the **count of 4s and 7s** in the number is itself a lucky number (contains only 4s and 7s, or is it lucky).

## Approach
1. Read the input number as a string
2. **Count occurrences:**
   - Iterate through each digit
   - Count how many times digit '4' or '7' appears
3. **Check if count is lucky:**
   - Convert the count to a string
   - Check if the count contains only digits 4 and 7
   - If yes, output "YES"
   - Otherwise, output "NO"

**Key Insight:** A number is "nearly lucky" if the count of lucky digits (4 and 7) within it is itself a lucky number.

## Complexity Analysis
- **Time Complexity:** O(d) where d is the number of digits. We iterate through the number twice: once to count and once to check if count is lucky.
- **Space Complexity:** O(1) - Only need to store count and iterate through digits

## Solutions
- [A_Nearly_Lucky_Number.py](A_Nearly_Lucky_Number.py) - Python solution

```

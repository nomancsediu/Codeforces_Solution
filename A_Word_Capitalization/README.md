```markdown
# A - Word Capitalization

## Problem Description
Given a word, **capitalize the first character** while keeping all other characters unchanged.

## Approach
1. Read the input word as a string
2. **Capitalize first character:**
   - Convert the first character (at index 0) to uppercase using the `upper()` function
   - Keep all remaining characters (from index 1 onwards) as they are
3. Concatenate the capitalized first character with the rest of the string
4. Print the result

**Key Insight:** Simply extract the first character, convert it to uppercase, and append the rest of the string unchanged.

## Complexity Analysis
- **Time Complexity:** O(n) where n is the length of the word. String concatenation takes O(n) time.
- **Space Complexity:** O(n) - New string created with the result

## Solutions
- [A_Word_Capitalization.py](A_Word_Capitalization.py) - Python solution

```

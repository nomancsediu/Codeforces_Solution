# A - Way Too Long Words

## Problem Description
Given a list of words, **abbreviate words that are longer than 10 characters**. 

For each word:
- If length ≤ 10: print the word as is
- If length > 10: abbreviate as `first_char + (length - 2) + last_char`

Example: `"loveliness"` (10 chars) → stay as `"loveliness"`  
Example: `"programming"` (11 chars) → becomes `"p10g"` (first char + 10 middle chars + last char)

## Approach
1. Read the number of words `n`
2. For each word:
   - Get the first character at index 0
   - Get the last character at index `len(s) - 1`
   - Calculate middle count: `len(s) - 2` (total length minus first and last)
   - If `len(s) > 10`: print abbreviation format as `first + str(middle) + last`
   - Otherwise: print the original word
3. Output result

**Key Insight:** The abbreviation simply replaces all middle characters with their count. We only need to track the first character, last character, and the count of characters in between.

## Complexity Analysis
- **Time Complexity:** O(n × m) where n is the number of words and m is the average length of each word (for string operations)
  - Reading and outputting takes O(m) per word
- **Space Complexity:** O(m) - Space for storing each word and the abbreviated result

## Solutions
- [A_Way_Too_Long_Words.py](A_Way_Too_Long_Words.py) - Python solution

## Example
```
Input:
4
word
loveliness
programming
abracadabra

Output:
word
loveliness
p10g
a10a
```

**Explanation:**
- `word` has 4 chars (≤ 10) → print as is
- `loveliness` has 10 chars (≤ 10) → print as is
- `programming` has 11 chars (> 10) → `p` + `10` + `g` = `p10g`
- `abracadabra` has 11 chars (> 10) → `a` + `10` + `a` = `a10a`

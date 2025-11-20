# Generate Parentheses 

## Core Idea
The algorithm uses **backtracking** to generate all valid combinations of `n` pairs of parentheses.

## What Backtracking Does
It builds the string step-by-step while ensuring:
- You never add more than `n` opening brackets `"("`.
- You never add a closing bracket `")"` unless there is an unmatched opening bracket.

## Variables Explained
- **curr** → current string being formed.
- **open** → how many `"("` have been used.
- **close** → how many `")"` have been used.
- **n** → number of bracket pairs required.

## Rules for Adding Characters
1. **Add `"("` when:**  
   `open < n`  
   (Still allowed to add more opening brackets.)

2. **Add `")"` when:**  
   `close < open`  
   (Only add a closing bracket if it does not break validity.)

## When a Valid Combination Is Completed
If the current string length equals `2 * n`, it's a full valid parentheses string and is added to the result list.

## Flow Summary
1. Start with an empty string.
2. Recursively try adding `"("` and `")"` following the rules.
3. Collect all complete valid combinations.

## Time and Space Complexity
- **Time Complexity:** `O(4^n / √n)`  
- **Space Complexity:** `O(n)` recursion depth + output size

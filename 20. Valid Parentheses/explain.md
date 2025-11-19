# Valid Parentheses Checker

## Problem
Determine if a string containing only `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'` is **valid**.  

A string is valid if:
- Open brackets are closed by the same type of brackets.
- Open brackets are closed in the correct order.
- Every closing bracket has a corresponding opening bracket.

---

## Approach
1. Use a **stack** to keep track of opening brackets.
2. Traverse the string character by character:
   - If it's an **opening bracket**, push it onto the stack.
   - If it's a **closing bracket**:
     - Check if the stack is empty → if yes, return false.
     - Pop the top element and check if it matches the closing bracket → if not, return false.
3. After traversal, the stack must be empty for the string to be valid.

---

## Complexity
- **Time Complexity:** O(n) — each character is processed once.  
- **Space Complexity:** O(n) — in the worst case, all characters are opening brackets stored in the stack.

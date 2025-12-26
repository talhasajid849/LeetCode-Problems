# LeetCode 39 – Combination Sum (Summary)

## Problem
Given a list of **distinct integers** `candidates` and an integer `target`, find all **unique combinations** where the chosen numbers sum to `target`.  
- Each number may be used **unlimited times**.
- Order of combinations does not matter.

---

## Approach
Use **backtracking (DFS)** to explore all possible combinations.

At each step:
- Pick a candidate starting from index `start`
- Reduce `target` by the chosen value
- Recurse while allowing reuse of the same element

---

## Key Conditions
- **`target == 0`** → valid combination found, store it and **return**
- **`target < 0`** → invalid path, stop recursion
- Use a **start index** to avoid duplicate permutations

---

## Why `return` is Important
After `target == 0`, recursion must stop immediately.  
Without `return`, extra elements may be added, causing unnecessary or incorrect exploration.

---

## Time & Space Complexity
- **Time:** Exponential (depends on target and number of candidates)
- **Space:** O(target) due to recursion stack and current path

---

## Corrected Code Snippet
```cpp
if (target == 0) {
    res.push_back(curr);
    return;
}

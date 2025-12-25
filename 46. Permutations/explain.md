## Permutations (LeetCode 46)

This solution uses **backtracking** to generate all permutations of a list of distinct integers.

### Approach
- Build permutations step by step using recursion.
- Use a `used` array to ensure each number is chosen only once per permutation.
- At each step:
  - **Choose** an unused number
  - **Explore** further by recursion
  - **Backtrack** by removing the number and marking it unused

### Base Case
When the current permutation size equals the input size, it is a valid permutation and is added to the result.

### Complexity
- **Time:** `O(n! × n)`
- **Space:** `O(n)` (recursion stack + used array)

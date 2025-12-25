## Subsets II (LeetCode 90)

This solution uses **backtracking** to generate all unique subsets.

- The array is **sorted first** so duplicates are adjacent.
- Every recursion state is a valid subset and is added to the result.
- To avoid duplicate subsets, elements are skipped **only at the same recursion level** using:
  ```cpp
  if (i > index && nums[i] == nums[i - 1]) continue;

### Complexity
- Time: O(2^n)
- Space: O(n)
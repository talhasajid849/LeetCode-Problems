# Merge Sorted Array - LeetCode 88

## Approach: Three-Pointer Merge from the Back

### Pointers:

* `i = m - 1` → last element of `nums1`
* `j = n - 1` → last element of `nums2`
* `k = m + n - 1` → last position in `nums1`

### Algorithm:

1. While `i >= 0 && j >= 0`:

   * Compare `nums1[i]` and `nums2[j]`
   * Place the larger at `nums1[k]`
   * Decrement the chosen pointer and `k`
2. Copy any remaining elements from `nums2` into `nums1`.
3. No need to copy leftover `nums1` elements — they are already in place.

### Example:

```
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3
```

Final `nums1` after merge:

```
[1,2,2,3,5,6]
```

### Time Complexity

* O(m + n) — each element is processed exactly once.

### Space Complexity

* O(1) — in-place merge, no extra array needed.

### Key Points

* Merge from the **back** to avoid overwriting elements.
* Use **three pointers** (`i`, `j`, `k`).
* Copy remaining `nums2` elements after main loop.
* Efficient and optimal solution for in-place merge.

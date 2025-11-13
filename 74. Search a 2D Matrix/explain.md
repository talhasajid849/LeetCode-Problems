# Search a 2D Matrix (LeetCode 74)

## Idea

Treat the 2D matrix as a **flattened sorted 1D array** and perform **binary search**.

- **1D → 2D mapping:**  
  - Row: `mid / n`  
  - Column: `mid % n`  
  - `n = number of columns`  

---

## Steps

1. Initialize `st = 0`, `end = m * n - 1`.
2. While `st <= end`:
   - `mid = st + (end - st)/2`
   - `val = matrix[mid / n][mid % n]`
   - Compare `val` with `target`:
     - Equal → return `true`
     - Less → `st = mid + 1`
     - Greater → `end = mid - 1`
3. If not found → return `false`.

---

## Complexity

- **Time:** O(log(m * n)) ✅  
- **Space:** O(1) ✅

---


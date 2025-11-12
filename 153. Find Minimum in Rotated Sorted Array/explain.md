### 🔹 How it works

1. Initialize `st = 0`, `end = n-1`.
2. Loop while `st < end`:
   - Compute `mid = st + (end - st)/2`.
   - Compare `nums[mid]` with `nums[end]`:
     - If `nums[mid] > nums[end]` → minimum is in **right half** → `st = mid + 1`.
     - Else → minimum is in **left half including mid** → `end = mid`.
3. When `st == end`, `nums[st]` is the **minimum element**.

---

### ⏱ Complexity

- **Time:** `O(log n)` — binary search halves the array each step.  
- **Space:** `O(1)` — constant space.

---

### ✅ Notes

- Works because **rotated sorted arrays** always have one sorted half.  
- `nums[mid] > nums[end]` is the key to detect the **unsorted part containing the minimum**.

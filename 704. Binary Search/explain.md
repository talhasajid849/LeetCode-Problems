### 🔹 How it works

1. **Initialize:** `st = 0`, `end = n-1`
2. **Loop:** while `st <= end`
   - Compute middle: `mid = st + (end - st)/2`
   - Compare `nums[mid]` with `target`:
     - If equal → return `mid` ✅
     - If `nums[mid] > target` → search left half → `end = mid - 1`
     - If `nums[mid] < target` → search right half → `st = mid + 1`
3. If the loop ends → target not found → return `-1`

---

### ⏱ Complexity

- **Time:** `O(log n)` — halves the search space each iteration
- **Space:** `O(1)` — no extra memory used

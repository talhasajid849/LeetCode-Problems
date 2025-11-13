# Search in Rotated Sorted Array

## 🔹 How it works

1. **Binary search:** Initialize `st = 0` and `end = nums.size() - 1`.  
2. **Loop while `st <= end`:**  
   - Compute `mid = st + (end - st)/2`.  
   - If `nums[mid] == target` → return `mid`.  
3. **Check which half is sorted:**  
   - If `nums[st] <= nums[mid]` → left half is sorted.  
     - If `target` lies in `[nums[st], nums[mid])` → search left → `end = mid - 1`.  
     - Else → search right → `st = mid + 1`.  
   - Else → right half is sorted.  
     - If `target` lies in `(nums[mid], nums[end]]` → search right → `st = mid + 1`.  
     - Else → search left → `end = mid - 1`.  
4. **Return -1** if not found.  

## ⏱ Complexity

- **Time:** O(log n) — binary search halves the search space each step  
- **Space:** O(1) — constant extra memory

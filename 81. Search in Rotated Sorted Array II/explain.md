# Binary Search in Rotated Sorted Array (With Duplicates) 

## Problem Context

* Array is **sorted but rotated** at some pivot.
* Array may contain **duplicates**.
* Goal: Check if `target` exists in array.

## Binary Search Pattern

1. **Initialize pointers**

```cpp
st = 0, end = n-1
```

2. **Loop until search space is empty**

```cpp
while (st <= end)
```

3. **Find mid element**

```cpp
mid = st + (end - st) / 2
```

4. **Check target**

```cpp
if (nums[mid] == target) return true;
```

5. **Handle duplicates**

```cpp
if (nums[mid] == nums[end]) end--;
```

* When duplicates exist, we cannot determine which half is sorted.
* Shrink `end` to remove ambiguity.

6. **Determine which half is sorted**

* **Right half sorted:** `nums[mid] < nums[end]`

  * If `target > nums[mid] && target <= nums[end]` → search right → `st = mid+1`
  * Else → search left → `end = mid-1`
* **Left half sorted:** `nums[mid] > nums[end]`

  * If `target >= nums[st] && target < nums[mid]` → search left → `end = mid-1`
  * Else → search right → `st = mid+1`

7. **Repeat** until target is found or `st > end`

8. **Return false** if not found.

## Time Complexity

| Case                          | Complexity | Reason                                     |
| ----------------------------- | ---------- | ------------------------------------------ |
| Best/Average (few duplicates) | `O(log n)` | Standard binary search behavior            |
| Worst (many duplicates)       | `O(n)`     | `end--` may reduce only 1 element per step |

## Space Complexity

* `O(1)` → Constant extra space (only pointers `st`, `end`, `mid` used)

## Key Points

* Always **shrink search space** based on sorted half and target’s position.
* `st <= end` ensures **last element is checked**.
* `end--` handles **duplicates safely**.
* Works for all tricky cases like:

  ```
  [1,1,1,3,1], target = 3
  [2,5,6,0,0,1,2], target = 3
  ```
* This is a **modified binary search** specifically for rotated arrays with duplicates.

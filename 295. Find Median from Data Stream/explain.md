# 🧮 MedianFinder — Two Heaps Approach

## 🔍 Idea
To efficiently find the median from a stream of numbers, maintain:
- **Max-Heap** (left side): stores the *smaller half* of numbers.
- **Min-Heap** (right side): stores the *larger half* of numbers.

This ensures:
- All values in `maxHeap` ≤ all values in `minHeap`
- `maxHeap` has either the **same size** or **one extra element**

Then:
- If sizes are equal → median = (maxHeap.top + minHeap.top) / 2
- Else → median = maxHeap.top

---

## 🧠 Why this works
We don't need full sorting.
We only track the **middle two values**, which are always at the tops of the two heaps.

---

## ⚙️ Steps on each `addNum(num)`
1. Push `num` into `maxHeap`.
2. If top of maxHeap > top of minHeap → move top to correct side.
3. Balance sizes:
   - maxHeap can have **1 more** element than minHeap.
   - If minHeap grows larger → move one to maxHeap.

---

## ⏱️ Time Complexity
| Operation     | Complexity |
|---------------|-------------|
| `addNum()`    | **O(log n)** (heap insertion + balancing) |
| `findMedian()`| **O(1)** (peek heap top) |

---

## 💾 Space Complexity
O(n)

All numbers are stored across both heaps.

---

## ✅ Summary
Two heaps let us:
- Insert fast (log n)
- Compute median instantly (O(1))
- Avoid full sorting (which is too slow)

This is the optimal solution for streaming median problems.

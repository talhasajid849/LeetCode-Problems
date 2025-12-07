# Jump Game II

## Problem

You are given an array `nums` where each element represents the **maximum jump length** from that index.
Start at index `0` and reach index `n-1` using the **minimum number of jumps**.
It is guaranteed that the last index is reachable.

---

## Greedy Approach (Optimal)

### Key Idea:

* Always track the **farthest index** reachable.
* Increase the **jump count only when the current jump range ends**.

---

## Complexity

* **Time:** `O(N)`
* **Space:** `O(1)`

---

✅ This greedy method always gives the **minimum number of jumps**.

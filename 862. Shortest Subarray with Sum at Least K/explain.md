# Shortest Subarray with Sum ≥ k

## Problem
Given an array of integers `nums` and an integer `k`, find the **length of the shortest contiguous subarray** whose sum is at least `k`. If no such subarray exists, return -1.

---

## Real-Life Analogy
Imagine walking along a line of houses, each house containing some coins (positive or negative).  

- You want to collect **at least `k` coins**.  
- You also want to **walk the shortest stretch of consecutive houses** to reach that goal.  

The goal is equivalent to finding the shortest subarray with sum ≥ k.

---

## Logical Approach

### 1. Prefix Sums
- Keep a **running total of coins** collected so far (prefix sum).  
- This allows us to calculate the sum of any stretch of houses quickly:

---

### 2. Candidate Starting Points
- Maintain a **deque of candidate starting indices** for subarrays.  
- Only keep **useful starts**:
  - Smaller prefix sums are better → can reach `k` sooner.  
  - Remove larger prefix sums at the back → they will never lead to shorter subarrays.

---

### 3. Finding Valid Subarrays
- For each current prefix sum (current end of subarray):
  - Check the **front of the deque**:
    - If `current_sum - deque_front_sum ≥ k` → valid subarray found.  
    - Update **shortest length** and remove front index.  
- Push current index to the back as a future candidate start.

---

### 4. Why Deque is Needed
- **Front** → earliest start → shortest subarray candidate.  
- **Back** → remove useless bigger prefix sums.  
- Ensures **efficient O(n) traversal** without checking all previous indices.  

---

## Time Complexity
- **O(n)**  
  - Each index enters and exits the deque **at most once**.  
  - Prefix sum computation → O(n).

## Space Complexity
- **O(n)**  
  - Prefix sum array → O(n)  
  - Deque → O(n) in worst case.

---

## Summary
- Transform array to **prefix sums** → allows constant-time subarray sum calculation.  
- Use a **monotonic deque** to track promising starting points.  
- Always check **front of deque** → guarantees shortest subarray.  
- Efficient solution with **O(n) time and space**.

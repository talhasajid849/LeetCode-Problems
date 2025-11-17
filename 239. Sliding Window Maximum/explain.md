# Sliding Window Maximum 

## Problem

Given an array of integers `nums` and a sliding window size `k`, find the maximum value in each sliding window as it moves from left to right.

Example:

```
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
```

## Logical Summary

* Use a **deque** to store indices of potential maximum elements.
* Remove indices that are **out of the current window** from the front of the deque.
* Remove indices from the back whose values are **smaller than the current element**, since they can't be maximum in the current or future windows.
* Add the current index to the deque.
* The **front of the deque** always holds the index of the maximum element for the current window.
* Start adding to the result vector once the first `k` elements are processed.


## Time and Space Complexity

* **Time Complexity:** `O(n)` - Each element is added and removed from the deque at most once.
* **Space Complexity:** `O(k)` - The deque stores at most `k` elements.

#🔹 How It Works

- Merge arrays: Combine nums1 and nums2 into a single sorted array res.

Find median:

- If total size n is odd → middle element: res[n/2]

- If even → average of two middle elements: (res[n/2 - 1] + res[n/2])/2.0

- Return the median.

## 🔹 Complexity

- Time: O(m + n) → each element visited once.

- Space: O(m + n) → new array res.
## Explanation for “Shortest Unsorted Continuous Subarray”

The idea is simple:

1. Scan from **left to right**  
   Track the running maximum.  
   If a number is **smaller** than this max, it breaks the sorted order.  
   Update `right` boundary.

2. Scan from **right to left**  
   Track the running minimum.  
   If a number is **greater** than this min, it breaks the sorted order.  
   Update `left` boundary.

3. The subarray between `left` and `right` is the shortest part that must be sorted.

4. If the array is already sorted, return `0`.

This method works in **O(n)** time and uses constant extra space.

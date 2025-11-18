# Relative Sort Array - Logic Summary

## Problem Understanding

* Given two arrays `arr1` and `arr2`.
* Elements in `arr2` are distinct and all are present in `arr1`.
* Goal: Sort `arr1` so that elements follow the relative order defined by `arr2`.
* Elements not in `arr2` should be placed at the end in ascending order.

## Solution Logic

1. **Build a Priority Map**

   * Create a HashMap to store the index of each element in `arr2`.
   * This index represents the **priority or relative order** for sorting elements.

2. **Define Sorting Rules**

   * **Case 1:** Both elements are in `arr2` → Sort based on their rank from the HashMap.
   * **Case 2:** Only one element is in `arr2` → That element comes first.
   * **Case 3:** Neither element is in `arr2` → Sort in normal ascending order.

3. **Sort `arr1`**

   * Use a custom comparator based on the above rules.
   * This ensures elements appear in the order defined by `arr2` first, followed by leftover elements in ascending order.

## Complexity Analysis

* **Time Complexity:**

  * Building map: O(m) where m = size of `arr2`
  * Sorting arr1: O(n log n) where n = size of `arr1`
  * Overall: O(n log n)

* **Space Complexity:**

  * HashMap storage: O(m)
  * Sorting is in-place (no extra array needed)
  * Overall: O(m)
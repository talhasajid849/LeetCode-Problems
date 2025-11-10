# Maximum Path Sum in a Binary Tree

## Problem

Given a binary tree, find the **maximum path sum**. A path can start and end at **any node**, and must follow **parent-child connections**. The path may pass through a node and include **both left and right subtrees**.

---

## Approach

1. Use **recursion** to calculate the maximum sum of a path starting from each node.
2. For each node:
   - Calculate `left = max(0, helper(leftChild))`  
   - Calculate `right = max(0, helper(rightChild))`  
     (Use `max(0, ...)` to ignore negative sums)
3. Update the global maximum:  

maxSum = max(maxSum, node.val + left + right)

4. Return the maximum path sum **for one branch** to the parent:  

return node.val + max(left, right)


---

## Key Points

- Only **one branch** can continue upwards to the parent.  
- Global `maxSum` stores the **overall maximum path** anywhere in the tree.  
- Initialize `maxSum = INT_MIN` to handle negative values.

---

## Time and Space Complexity

- **Time Complexity:** O(n), where n = number of nodes (each node is visited once).  
- **Space Complexity:** O(h), where h = height of the tree (recursion stack).

---

## Example

 ```
     1
    / \
   2   3
  / \
4   5
```

- Node 2: max path through = 2 + 4 + 5 = 11  
- Node 1: max path through = 1 + 7 + 3 = 11  
- **Maximum Path Sum = 11**

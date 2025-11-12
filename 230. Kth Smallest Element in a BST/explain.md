# 🧩 Problem

Find the kth smallest element in a Binary Search Tree (BST).

## 💡 Idea

- Use a max-heap (priority_queue) to keep track of the k smallest elements while traversing the tree.
- Traverse all nodes (DFS).
- Push each node’s value into the heap.
- If heap size > k → pop the largest (keep only k smallest).
- After traversal, the heap’s top is the kth smallest element.

## ⏱️ Complexity

- Time: O(n log k) — each insertion/deletion in heap costs log k.
- Space: O(k + h) — heap stores up to k elements, recursion depth = h (tree height).
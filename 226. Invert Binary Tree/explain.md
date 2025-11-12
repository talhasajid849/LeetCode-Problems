# 🧩 Problem

Given a binary tree, invert it (mirror it). Swap the left and right children for every node.

## 💡 Idea

- Recursive approach:
- Swap the left and right children of the current node.
- Recursively invert the left and right subtrees.
- Return the root at the end.

## ⏱️ Complexity

- Time: O(n) — every node is visited once.
- Space: O(h) — recursion stack, where h = height of the tree.
- Worst case (skewed tree): O(n)
- Best case (balanced tree): O(log n)

## ✅ Summary:
``` Simple and elegant recursive solution that visits every node, swaps its children, and mirrors the entire tree. ```
# Lowest Common Ancestor in BST

## Key Idea

For a **BST**, the property is:

```
left subtree values < node value < right subtree values
```

So for any two nodes `p` and `q`:

* If both `p` and `q` < `root.val` → LCA is in **left subtree**
* If both `p` and `q` > `root.val` → LCA is in **right subtree**
* Otherwise → `root` is the **split point** → **LCA found**

## Recursive C++ Solution

```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return nullptr;

        if (p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        else if (p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        else
            return root;
    }
};
```

## Iterative C++ Solution

```cpp
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;
        while (cur) {
            if (p->val < cur->val && q->val < cur->val)
                cur = cur->left;
            else if (p->val > cur->val && q->val > cur->val)
                cur = cur->right;
            else
                return cur; // split point, LCA found
        }
        return nullptr;
    }
};
```

## Complexity

* **Time:** O(h) → h = height of BST
* **Space:** O(h) for recursion, O(1) for iterative

## Examples

1. `root=[6,2,8,0,4,7,9,null,null,3,5], p=2, q=8`

   * `2 < 6`, `8 > 6` → split at 6 → **LCA = 6**

2. `root=[6,2,8,0,4,7,9,null,null,3,5], p=2, q=4`

   * `2 < 6`, `4 < 6` → go left → root = 2
   * `2 == p` → split poi


//  Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
  right(right) {}
  };
 
class Solution {
public:
    int maxSum;
    int helper(TreeNode* root) {
        if (!root)
            return 0;
        int left = max(0, helper(root->left));
        int right = max(0, helper(root->right));

        maxSum = max(root->val + left + right, maxSum);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        helper(root);
        return maxSum;
    }
};
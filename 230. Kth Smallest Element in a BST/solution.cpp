/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, priority_queue<int>& pq, int k) {
        if (!root)
            return;

        pq.push(root->val);
        if(pq.size()>k) pq.pop();

        helper(root->left, pq, k);
        helper(root->right,  pq, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;

        helper(root, pq, k);

        return pq.top();
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int khelper(TreeNode* root, int& it) {
        if (root == NULL || it == 0)
            return -1;
        int left = khelper(root->left, it);
        if (it == 0) return left; // Found in the left subtree
        it--;
        if (it == 0) return root->val; // Found at the current node
        return khelper(root->right, it); // Search in the right subtree
    }

    int kthSmallest(TreeNode* root, int k) {
        return khelper(root, k);
    }
};
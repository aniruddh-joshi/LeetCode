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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        // Map to store the indices of elements in the inorder traversal
        unordered_map<int, int> inmap;
        for (int i = 0; i < inorder.size(); ++i) {
            inmap[inorder[i]] = i;
        }

        return buildTreeHelper(inorder, 0, inorder.size() - 1, 
                               postorder, 0, postorder.size() - 1, inmap);
    }

private:
    TreeNode* buildTreeHelper(vector<int>& inorder, int instart, int inend, 
                              vector<int>& postorder, int poststart, int postend, 
                              unordered_map<int, int>& inmap) {
        // Base case: If the range is invalid
        if (instart > inend || poststart > postend) {
            return nullptr;
        }

        // Root node is the last element in the current postorder range
        TreeNode* root = new TreeNode(postorder[postend]);

        // Index of the root in the inorder traversal
        int inroot = inmap[root->val];
        int numsleft = inroot - instart; // Number of nodes in the left subtree

        // Recursively construct the left and right subtrees
        root->left = buildTreeHelper(inorder, instart, inroot - 1, 
                                     postorder, poststart, poststart + numsleft - 1, inmap);

        root->right = buildTreeHelper(inorder, inroot + 1, inend, 
                                      postorder, poststart + numsleft, postend - 1, inmap);

        return root;
    }
};
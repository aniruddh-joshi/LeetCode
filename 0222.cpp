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
    void inorder(TreeNode* root,int &count){
        if(root!=NULL){
            inorder(root->left,count);
            count++;
            inorder(root->right,count);
        }
    }
    int countNodes(TreeNode* root) {
        int cnt=0;
        inorder(root,cnt);
        return cnt;
    }
};

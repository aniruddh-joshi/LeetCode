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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
        return {};
        queue<TreeNode *>q;
        q.push(root);
        vector<int> ans;
        while(!q.empty())
        {
            int len=q.size();
            int lvl=1; //marker to mark the first element of each level
            while(len>0)
            {
                TreeNode *t1=q.front();
                if(lvl==1)
                ans.push_back(t1->val);
                q.pop();
                if(t1->right)
                q.push(t1->right);
                if(t1->left)
                q.push(t1->left);
                len--;
                lvl++; //increasing the marker after pushing 1st element of each level
            }
        }
        return ans;
    }
};
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (!root) {
            return ans;
        }
        queue<TreeNode*> q{{root}};
        while (!q.empty()) {
            int levelsize = q.size();
            double sum = 0; 
            for (int i = 0; i < levelsize; i++) {
                auto temp = q.front();
                q.pop();
                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
                sum += temp->val;
            }
            ans.push_back(sum / levelsize);
        }
        return ans;
    }
};

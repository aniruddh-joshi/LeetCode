class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
		vector<int>result;
		preorder(root,result);
		return result;
		}
		void preorder(TreeNode* root,vector<int>&result){
				if(root!=NULL)
				{
          result.push_back(root->val);
					preorder(root->left,result);
					preorder(root->right,result);
				}
    }
};

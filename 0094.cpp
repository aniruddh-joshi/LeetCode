class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
		vector<int>result;
		inorder(root,result);
		return result;
		}
		void inorder(TreeNode* root,vector<int>&result){
				if(root!=NULL)
				{
					inorder(root->left,result);
					result.push_back(root->val);
					inorder(root->right,result);
				}
    }
};

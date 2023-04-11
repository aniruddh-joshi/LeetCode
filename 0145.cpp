class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
		vector<int>result;
		postorder(root,result);
		return result;
		}
		void postorder(TreeNode* root,vector<int>&result){
				if(root!=NULL)
				{
					postorder(root->left,result);
					postorder(root->right,result);
                    result.push_back(root->val);
				}
    }
};

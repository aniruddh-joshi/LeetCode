/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        int count=0;
        ListNode*current=head;
        while(current!=NULL){
            count++;
            current=current->next;
        }
        return buildTree(head,0,count-1);
    }

    TreeNode* buildTree(ListNode* & head,int start,int end){
        if(start>end){
            return NULL;
        }
        int mid=start+(end-start)/2;

        TreeNode*root=new TreeNode();

        root->left=buildTree(head,start,mid-1);
        root->val=head->val;
        head=head->next;
        root->right=buildTree(head,mid+1,end);
        
        return root;
    }
};

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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //base call
        if(head==NULL){
            return NULL;
        }
        //Step 1: reverse the 1st node
        ListNode*current=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        int cnt=0;
        while( current != NULL && cnt < k ){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            cnt++;
        }
        // To check remaining node 
        ListNode*remaining=current;
        int remaining_cnt=0;
        while(remaining != NULL){
            remaining=remaining->next;
            remaining_cnt++;
        }
        if(remaining_cnt >= k){
            head->next=reverseKGroup(current,k);
        }
        else{
            head->next=current;
        }
        //Step 3: Return head of Linked List
        return prev;
    }
};

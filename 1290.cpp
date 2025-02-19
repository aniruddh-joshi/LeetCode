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
    int getDecimalValue(ListNode* head) {
        string num;
        int dec=0;
        while(head){
            num+=(head->val)+'0';
            head=head->next;
        }
        int p=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='1'){
                dec+=pow(2,p);
            }
            p++;
        }
        return dec;
    }
};

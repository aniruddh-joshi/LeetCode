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
        if (head == nullptr) {
            return nullptr;
        }
        
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        int count = 0;
        
        // Count the number of nodes in this group
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }
        
        // If the number of nodes is less than k, do not reverse
        if (count < k) {
            return head;
        }
        
        // Reverse the current group
        curr = head;
        count = 0;
        while (curr != nullptr && count < k) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        // Connect the reversed group with the next group
        if (next != nullptr) {
            head->next = reverseKGroup(next, k);
        }
        
        // prev is the new head of this group after reversal
        return prev;
    }
};

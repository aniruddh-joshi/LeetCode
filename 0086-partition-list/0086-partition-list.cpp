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
    ListNode* partition(ListNode* head, int x) {
        if (!head) return head;

        ListNode* smallHead = new ListNode(0);  // Dummy node for smaller partition
        ListNode* largeHead = new ListNode(0);  // Dummy node for larger partition
        ListNode* small = smallHead;  // Pointer to build small list
        ListNode* large = largeHead;  // Pointer to build large list
        
        while (head != nullptr) {
            if (head->val < x) {
                small->next = head;  // Add to small list
                small = small->next;
            } else {
                large->next = head;  // Add to large list
                large = large->next;
            }
            head = head->next;
        }
        
        large->next = nullptr;  // Ensure the end of large list is null
        small->next = largeHead->next;  // Connect small list to large list

        return smallHead->next;  // Return the head of the new partitioned list
    }
};

            
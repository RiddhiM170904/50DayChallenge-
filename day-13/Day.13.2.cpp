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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* current = head;

        while (current) {
            if (current->next && current->val == current->next->val) {
                int duplicateVal = current->val;
                while (current && current->val == duplicateVal) {
                    ListNode* temp = current;
                    current = current->next;
                    delete temp; 
                }
                prev->next = current;
            } else {
                prev = current;
                current = current->next;
            }
        }

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
// The above code defines a class Solution with a public method deleteDuplicates that takes a pointer to the head of a singly-linked list as input. The method removes all nodes that have duplicate numbers, leaving only distinct numbers from the original list. It uses a dummy node to handle edge cases and two pointers (prev and current) to traverse the list and remove duplicates.
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = dummy;

        for (int i = 0; i <= n; ++i) {
            fast = fast->next;
        }

        
        while (fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        
        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete; 

        ListNode* newHead = dummy->next;
        delete dummy; 
        return newHead;
    
    }
};
// The above code defines a class Solution with a public method removeNthFromEnd that takes a pointer to the head of a singly-linked list and an integer n as input. The method removes the nth node from the end of the list and returns the modified list. It uses a dummy node to handle edge cases and two pointers (slow and fast) to find the node to be deleted.
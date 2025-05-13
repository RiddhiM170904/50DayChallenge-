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
        ListNode* lessHead = new ListNode(0);   
        ListNode* greaterHead = new ListNode(0);
        ListNode* less = lessHead;
        ListNode* greater = greaterHead;

        while (head) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        greater->next = nullptr;        
        less->next = greaterHead->next; 

        ListNode* result = lessHead->next;
        delete lessHead;
        delete greaterHead;
        return result;
    }
};
// The above code defines a class Solution with a public method partition that takes a pointer to the head of a singly-linked list and an integer x as input. The method partitions the list into two parts: nodes with values less than x and nodes with values greater than or equal to x. It returns the head of the modified list, ensuring that the relative order of nodes in each partition is preserved.
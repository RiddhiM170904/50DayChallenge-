/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};

// The above code defines a class Solution with a public method deleteNode that takes a pointer to a ListNode as input and deletes the node from a singly linked list. It copies the value of the next node into the current node, updates the next pointer to skip the next node, and then deletes the next node to free memory.
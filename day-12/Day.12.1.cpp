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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* curr = head;
        while (curr && curr->next) {
            int gcdVal = std::gcd(curr->val, curr->next->val);
            ListNode* newNode = new ListNode(gcdVal);
            newNode->next = curr->next;
            curr->next = newNode;
            curr = newNode->next; // Move two steps forward
        }
        return head;
    }
};
// The above code defines a class Solution with a public method insertGreatestCommonDivisors that takes a pointer to the head of a singly-linked list as input. The method inserts a new node with the greatest common divisor (GCD) of the current node's value and the next node's value between them. It uses the std::gcd function from the C++ standard library to calculate the GCD.
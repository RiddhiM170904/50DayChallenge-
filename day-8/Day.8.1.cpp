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
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenHead = even;

        while (even && even->next)
        {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
        return head;
    }
};
// The code above is a C++ solution to the problem of rearranging a linked list such that all odd-indexed nodes come before all even-indexed nodes. The function `oddEvenList` takes the head of the linked list as input and returns the modified list. It uses two pointers to keep track of the odd and even nodes, and rearranges the links accordingly. The code handles edge cases, such as when the list is empty or has only one node.
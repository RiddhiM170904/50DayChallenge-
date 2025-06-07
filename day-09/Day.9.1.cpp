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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first = head, *second = head, *curr = head;
        for (int i = 1; i < k; ++i)
            first = first->next;

        ListNode *kthFromStart = first;
        while (first->next)
        {
            first = first->next;
            second = second->next;
        }

        swap(kthFromStart->val, second->val);
    }
};

// The code above is a C++ solution to the problem of swapping nodes in a linked list. It defines a function `swapNodes` that takes the head of a linked list and an integer `k`, and swaps the k-th node from the beginning with the k-th node from the end of the list. The function uses two pointers to traverse the list and perform the swap operation. The code is efficient and handles edge cases, such as when the list has only one node or when `k` is equal to half the length of the list.
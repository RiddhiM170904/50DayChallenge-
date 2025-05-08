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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
// The code above is a C++ solution to the problem of finding the middle node of a linked list. The function `middleNode` takes the head of the linked list as input and returns the middle node. It uses two pointers, `slow` and `fast`, where `slow` moves one step at a time and `fast` moves two steps at a time. When `fast` reaches the end of the list, `slow` will be at the middle node. The code handles edge cases, such as when the list is empty or has only one node.
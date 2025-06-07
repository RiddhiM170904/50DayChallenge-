
// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;

        while (curr != nullptr)
        {
            ListNode *nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};
// The code above is a C++ solution to the problem of reversing a singly linked list. The function `reverseList` takes the head of the linked list as input and returns the new head of the reversed list. It uses three pointers: `prev`, `curr`, and `nextNode` to keep track of the previous, current, and next nodes while iterating through the list. The code handles edge cases, such as when the list is empty or has only one node.
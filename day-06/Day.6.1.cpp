class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;

        ListNode *current = dummy;
        while (current->next != nullptr)
        {
            if (current->next->val == val)
            {
                ListNode *temp = current->next;
                current->next = current->next->next;
                delete temp;
            }
            else
            {
                current = current->next;
            }
        }

        ListNode *newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
// The code above is a C++ solution to the problem of removing all elements with a specific value from a linked list. The function `removeElements` takes the head of the linked list and an integer `val` as input, and returns the modified list with all nodes containing `val` removed. It uses a dummy node to simplify the removal process and iterates through the list, deleting nodes as necessary. Finally, it returns the new head of the list.
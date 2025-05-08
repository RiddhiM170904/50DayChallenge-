class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (!head || !head->next)
            return false;

        ListNode *slow = head;
        ListNode *fast = head->next;

        while (slow != fast)
        {
            if (!fast || !fast->next)
                return false;
            slow = slow->next;
            fast = fast->next->next;
        }

        return true;
    }
};
// // The code above is a C++ solution to the problem of detecting a cycle in a linked list. The function `hasCycle` takes the head of the linked list as input and returns a boolean indicating whether there is a cycle in the list. It uses the Floyd's Tortoise and Hare algorithm, where two pointers (slow and fast) traverse the list at different speeds. If they meet, it indicates that there is a cycle; otherwise, if the fast pointer reaches the end of the list, there is no cycle.
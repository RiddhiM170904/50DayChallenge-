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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;

        int len = 1;
        ListNode *tail = head;
        while (tail->next)
        {
            tail = tail->next;
            len++;
        }

        tail->next = head;

        k = k % len;
        int stepsToNewHead = len - k;

        ListNode *newTail = tail;
        while (stepsToNewHead--)
        {
            newTail = newTail->next;
        }

        ListNode *newHead = newTail->next;
        newTail->next = NULL;

        return newHead;
    }

    void printList(ListNode *head)
    {
        while (head)
        {
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
};
// The code above is a C++ solution to the problem of rotating a linked list to the right by k places. The function `rotateRight` takes the head of the linked list and an integer k as input, and returns the new head of the rotated list. It first calculates the length of the list, then connects the tail to the head to form a circular list. After that, it calculates the new head and tail positions and breaks the circular connection. The function also includes a helper method `printList` to print the elements of the list for debugging purposes.
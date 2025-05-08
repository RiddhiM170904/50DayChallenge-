class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> values;

        ListNode *current = head;
        while (current != nullptr)
        {
            values.push_back(current->val);
            current = current->next;
        }
        int left = 0;
        int right = values.size() - 1;

        while (left < right)
        {
            if (values[left] != values[right])
            {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
// The code above is a C++ solution to the problem of checking if a linked list is a palindrome. The function `isPalindrome` takes the head of the linked list as input and returns a boolean indicating whether the list is a palindrome. It uses a vector to store the values of the nodes, then checks if the values are the same when read from both ends towards the center. The solution is straightforward and easy to understand.
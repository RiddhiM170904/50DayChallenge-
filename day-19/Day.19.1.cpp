#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty()) return false;
                char top = stack.top();
                stack.pop();
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
// The above code defines a class Solution with a public method isValid that takes a string s as input. It checks if the parentheses in the string are valid by using a stack. The method iterates through each character in the string, pushing opening brackets onto the stack and checking for matching closing brackets. If there is a mismatch or if there are unmatched opening brackets left in the stack at the end, it returns false; otherwise, it returns true indicating that the parentheses are valid.
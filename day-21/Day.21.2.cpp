class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;

        for (char ch : s) {
            if (ch == '(') {
                low++; 
                high++; 
            } else if (ch == ')') {
                if (low > 0)
                    low--; 
                high--;  
            } else {    
                if (low > 0)
                    low--; 
                high++;    
            }

            if (high < 0)
                return false; 
        }

        return low == 0;
    }
};
// The above code defines a class Solution with a public method checkValidString that takes a string s as input. It checks if the string is a valid parentheses string, allowing for '*' characters to be treated as either '(', ')' or an empty string. The method uses two counters, low and high, to track the minimum and maximum possible open parentheses at each step. It iterates through the characters in the string, updating the counters accordingly. If at any point high becomes negative, it returns false. Finally, it checks if low is zero, indicating a valid string.
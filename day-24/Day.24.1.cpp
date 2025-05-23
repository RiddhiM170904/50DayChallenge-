class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int num = 0;
        int sign = 1;  
        int result = 0;

        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];

            if (isdigit(ch)) {
                
                num = num * 10 + (ch - '0');
            }

            if (ch == '+' || ch == '-' || ch == '(' || ch == ')' || i == s.size() - 1) {
                
                if (ch == '+' || ch == '-') {
                    result += sign * num;  
                    num = 0;  
                    sign = (ch == '+') ? 1 : -1;  
                } else if (ch == '(') {
                    
                    st.push(result);
                    st.push(sign);
                    result = 0;  
                    sign = 1;  
                } else if (ch == ')') {
                    
                    result += sign * num;
                    num = 0; 
                    result *= st.top();  
                    st.pop();
                    result += st.top();  
                    st.pop();
                }
            }
        }

        if (num != 0) {
            result += sign * num;
        }

        return result;
    }
};
// The code defines a class Solution with a public method calculate that takes a string s as input and returns the result of the arithmetic expression represented by the string.
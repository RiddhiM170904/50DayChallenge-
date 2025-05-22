class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLength = 0;

        for(int i=0;i < s.length();++i){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    maxLength = max(maxLength, i- st.top());
                } else {
                    st.push(i);
                }
            }
        }
        return maxLength;
    }
};
// The code defines a class Solution with a public method longestValidParentheses that takes a string s as input and returns the length of the longest valid parentheses substring.


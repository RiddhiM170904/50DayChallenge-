class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();

                if (token == "+")
                    st.push(a + b);
                else if (token == "-")
                    st.push(a - b);
                else if (token == "*")
                    st.push(a * b);
                else if (token == "/")
                    st.push(a / b);
            } else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};

// The above code defines a class Solution with a public method evalRPN that takes a vector of strings tokens as input. It evaluates the value of an arithmetic expression in Reverse Polish Notation (RPN). The method uses a stack to store operands and processes each token. If the token is an operator, it pops the top two operands from the stack, applies the operator, and pushes the result back onto the stack. If the token is a number, it converts it to an integer and pushes it onto the stack. Finally, it returns the top value of the stack, which is the result of the expression.
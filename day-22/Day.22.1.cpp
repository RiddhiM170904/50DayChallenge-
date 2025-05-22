class Solution {
public:
    string minRemoveToMakeValid(string s) {
        std::stack<int> stk;             
        std::unordered_set<int> toRemove;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(') {
                stk.push(i);
            } else if (s[i] == ')') {
                if (!stk.empty()) {
                    stk.pop();
                } else {
                    toRemove.insert(i); 
                }
            }
        }

        while (!stk.empty()) {
            toRemove.insert(stk.top());
            stk.pop();
        }

        std::string result;
        for (int i = 0; i < s.length(); ++i) {
            if (toRemove.find(i) == toRemove.end()) {
                result += s[i];
            }
        }

        return result;
    }
};

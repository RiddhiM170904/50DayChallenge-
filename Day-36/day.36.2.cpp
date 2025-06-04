class Solution {
public:
    string reverseVowels(string s) {
        string vowels ="aAeEiIoOuU";
        stack<char>cv;
        for(char c:s){
            for(char i : vowels){
                if(c==i)cv.push(c);
            }
        }
        if(cv.empty())return s;
        for(int i = 0 ;i<s.size();i++){
            for(char v : vowels){
                if(s[i]==v){
                    s[i]=cv.top();
                    cv.pop();
                    break;
                }
            }
        }
        return s;
        
    }
};

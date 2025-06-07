class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string g = words[i];
            reverse(g.begin(),g.end());
            if(words[i]==g){
                return words[i];    
            } 
        }
        return "";
    }
};

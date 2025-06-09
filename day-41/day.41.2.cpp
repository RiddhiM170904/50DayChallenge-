class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";  
    
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); ++i) {
        
        while (strs[i].find(prefix) != 0) {
            
            prefix = prefix.substr(0, prefix.size() - 1);
            
            if (prefix.empty()) return "";
        }
    }
    return prefix; 
    }
};
// description: This code defines a function to find the longest common prefix among a list of strings. It initializes the prefix with the first string and iteratively checks each subsequent string to see if it starts with the current prefix. If not, it reduces the prefix by removing the last character until a match is found or the prefix becomes empty. The function returns the longest common prefix or an empty string if no common prefix exists. The time complexity is O(n * m) where n is the number of strings and m is the length of the shortest string.

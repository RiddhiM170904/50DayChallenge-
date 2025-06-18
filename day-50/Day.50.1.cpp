class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();

        if (n == 1) return "";

        for (int i = 0; i < n / 2; ++i) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n - 1] = 'b';
        return palindrome;
    }
};
// description: This code defines a function to break a palindrome by changing the first non-'a' character to 'a'. If all characters are 'a', it changes the last character to 'b'. The function handles edge cases like single-character palindromes and ensures that the result is not a palindrome. The time complexity is O(n) where n is the length of the string, as it iterates through half of the string at most once.
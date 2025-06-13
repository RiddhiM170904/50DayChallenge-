class Solution {
public:
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int lenGCD = gcd(str1.length(),str2.length());
        return str1.substr(0,lenGCD);
    }
};
// description: This code defines a function to find the greatest common divisor (GCD) of two strings. It first checks if concatenating the two strings in both possible orders results in the same string, which is a necessary condition for them to have a common divisor. If they do not match, it returns an empty string. If they do match, it calculates the GCD of their lengths and returns the substring of the first string up to that length, which represents the GCD of the two strings. The time complexity is O(n + m) where n and m are the lengths of the two strings.
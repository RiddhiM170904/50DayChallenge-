class Solution
{
public:
    bool isPalindrome(int x)
    {
        unsigned int temp, rev = 0;
        temp = x;
        while (temp > 0)
        {
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }
        return (rev == x);
    }
};
// // The code above is a C++ solution to the problem of checking if an integer is a palindrome. The function `isPalindrome` takes an integer `x` as input and returns a boolean indicating whether `x` is a palindrome. It reverses the integer by extracting its digits and comparing the reversed integer with the original one. The solution handles negative numbers by returning false, as negative numbers cannot be palindromes.
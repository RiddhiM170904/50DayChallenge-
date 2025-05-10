class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while (n >= 5) {
            count += n / 5;
            n /= 5;
        }
        
        return count;
    }
};
// The above code defines a class Solution with a public method trailingZeroes that takes an integer n as input and returns the number of trailing zeroes in the factorial of n. The method uses a while loop to count the number of factors of 5 in the factorial, which determines the number of trailing zeroes.
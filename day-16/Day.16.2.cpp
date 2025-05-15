class Solution {
public:
    bool judgeSquareSum(int c) {
        long long long long a = 0;
        long long b = (long long)sqrt(c);

        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum == c) return true;
            else if (sum < c) a++;
            else b--;
        }
        return false;
    }
};

// The above code defines a class Solution with a public method judgeSquareSum that takes an integer c as input and returns a boolean indicating whether there exist two non-negative integers a and b such that a^2 + b^2 = c. It uses a two-pointer approach, starting with one pointer at 0 and the other at the square root of c, and adjusts the pointers based on the sum of squares until they meet or find a valid pair.
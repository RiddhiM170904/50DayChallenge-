class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num == 1)
            return false;
        int s = 1;
        for (int i = 2; i * i <= num; ++i)
        {
            if (num % i == 0)
            {
                s += i;
                if (i != num / i)
                    s += num / i;
            }
        }
        return s == num;
    }
};
// // The code above is a C++ solution to the problem of checking if a number is a perfect number. A perfect number is defined as a positive integer that is equal to the sum of its proper positive divisors, excluding itself. The function `checkPerfectNumber` takes an integer `num` as input and returns a boolean indicating whether `num` is a perfect number. It iterates through potential divisors and calculates their sum, then compares it to the original number. The solution handles edge cases, such as when `num` is 1.
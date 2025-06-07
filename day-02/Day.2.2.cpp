class Solution
{
public:
    int addDigitsHelper(int num)
    {
        int sum = 0;
        while (num != 0)
        {
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        return sum;
    }
    int addDigits(int num)
    {
        while (num > 9)
        {
            num = addDigitsHelper(num);
        }
        return num;
    }
};
// // The code above is a C++ solution to the problem of repeatedly adding the digits of a number until a single digit is obtained. The function `addDigits` takes an integer `num` as input and uses a helper function `addDigitsHelper` to calculate the sum of the digits. It continues to call the helper function until the result is a single digit (less than 10). The final single digit is returned as the output.
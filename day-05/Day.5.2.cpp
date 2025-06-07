class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int s = 0;
        if (num == 1)
            return true;
        int e = num / 2;
        while (s <= e)
        {
            long long int mid = s + (e - s) / 2;
            if (mid * mid == num)
                return true;
            else if (mid * mid > num)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return false;
    }
};
// // The code above is a C++ solution to the problem of determining if a given number is a perfect square. The function `isPerfectSquare` takes an integer `num` as input and returns a boolean indicating whether `num` is a perfect square. It uses binary search to efficiently find the square root of the number, checking if the square of the mid-point equals the original number. The solution handles edge cases, such as when `num` is 1.
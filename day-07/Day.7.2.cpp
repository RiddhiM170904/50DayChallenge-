class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int idx = digits.size() - 1;
        while (idx >= 0)
        {
            if (digits[idx] == 9)
                digits[idx] = 0;
            else
            {
                digits[idx] += 1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// // The code above is a C++ solution to the problem of adding one to a number represented as an array of digits. The function `plusOne` takes a vector of integers `digits` as input, where each element represents a digit of the number. It iterates through the array from the last digit to the first, handling the carry if a digit becomes 10. If all digits are 9, it inserts a 1 at the beginning of the array. The function returns the modified array.
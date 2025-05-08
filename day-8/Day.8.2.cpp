class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int result = 0;
        for (char c : columnTitle)
        {
            result = result * 26 + (c - 'A' + 1);
        }
        return result;
    }
};
// // The code above is a C++ solution to the problem of converting a column title (like "A", "B", ..., "Z", "AA", "AB", ...) to its corresponding column number in an Excel sheet. The function `titleToNumber` takes a string `columnTitle` as input and returns the corresponding column number as an integer. It uses a loop to iterate through each character in the string, calculating the result by multiplying the current result by 26 and adding the value of the current character.
class Solution
{
public:
    int sumOfSquares(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end())
        {
            seen.insert(n);
            n = sumOfSquares(n);
        }

        return n == 1;
    }

    int main()
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        if (isHappy(n))
        {
            cout << n << " is a happy number." << endl;
        }
        else
        {
            cout << n << " is not a happy number." << endl;
        }

        return 0;
    }
};
// // The code above is a C++ solution to the problem of determining if a number is a happy number. A happy number is defined as a number which eventually reaches 1 when replaced by the sum of the square of each digit. The function `sumOfSquares` calculates the sum of squares of the digits, while the function `isHappy` checks if the number is happy by using a set to track seen numbers. The main function takes user input and prints whether the number is happy or not.
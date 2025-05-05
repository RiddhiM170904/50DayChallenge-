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
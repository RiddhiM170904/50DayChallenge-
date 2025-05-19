class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int b = nums[nums.size()-1];
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};
// The above code defines a class Solution with a public method findGCD that takes a vector of integers nums as input. It calculates the greatest common divisor (GCD) of the smallest and largest numbers in the vector. The method first sorts the vector, then uses the Euclidean algorithm to find the GCD of the first and last elements (smallest and largest). Finally, it returns the GCD.
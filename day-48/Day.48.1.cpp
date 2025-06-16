class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            g = gcd(g, nums[i]);
            if (g == 1)
                return true;  
        }
        return g == 1;
    }
};
// description: This code defines a function to determine if an array of integers is a "good" array, meaning that the greatest common divisor (GCD) of all its elements is 1. It initializes the GCD with the first element and iteratively computes the GCD with each subsequent element. If at any point the GCD becomes 1, it returns true, indicating that the array is good. If the loop completes and the GCD is still greater than 1, it returns false. The time complexity is O(n log(max(nums))) where n is the number of elements in nums.
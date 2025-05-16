class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

// The above code defines a class Solution with a public method twoSum that takes a vector of integers nums and an integer target as input. It returns a vector containing the indices of the two numbers in nums that add up to target. The method uses a nested loop to check all pairs of numbers in the vector, returning the indices of the first pair found that meets the condition. If no such pair exists, it returns an empty vector.
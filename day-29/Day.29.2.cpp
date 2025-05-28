class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int s = nums.size();
        sort(nums.begin(),nums.end());
        return nums[s-k];
    }
};
// description: This code defines a function to find the k-th largest element in an array by sorting the array and returning the appropriate element based on the size of the array and k.
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int low = 0;
        int high =  nums.size()-1;
        int mid;
        while(low<=high){
            mid = low + (high - low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};
// The code defines a class Solution with a public method searchInsert that takes a vector of integers nums and an integer target as input and returns the index at which the target should be inserted in the sorted array.
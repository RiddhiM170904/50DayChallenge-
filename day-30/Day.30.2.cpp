class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size()-1;
        while(low<high){
            int mid = low + (high - low)/2;
            int count = 0;

            for(int num:nums){
                if(num<=mid) count++;
            }

            if(count > mid){
                high = mid;
            }
            else{
                low = mid +1;
            }
        }
        return low;
    }
};

// description: This code defines a function to find the duplicate number in an array where the numbers are in the range from 1 to n and there is exactly one duplicate. It uses a binary search approach to efficiently find the duplicate by counting how many numbers are less than or equal to the midpoint and adjusting the search range based on that count. The function returns the duplicate number as an integer.
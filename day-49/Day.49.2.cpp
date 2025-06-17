class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            int m = count(nums.begin(),nums.end(),nums[i]);
            if(m==1){
                return nums[i];
                break;
            }
        }
        return 1;
    }
};
// description: This code defines a function to find the single number in an array where every other number appears twice. It iterates through the array, counting occurrences of each number using the `count` function from the STL. If a number appears exactly once, it is returned as the result. The time complexity is O(n^2) due to the nested counting operation, which can be inefficient for large arrays. A more optimal solution would use bit manipulation or a hash map to achieve O(n) complexity.
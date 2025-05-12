class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                c=c+1;
            }
        }
        if(c%2==0){
            return 1;
        }
        else{
            return -1;
        }
    }
};

// The above code defines a class Solution with a public method arraySign that takes a vector of integers as input and returns the sign of the product of the elements in the array. The method counts the number of negative numbers in the array and checks for zeroes to determine the sign of the product.
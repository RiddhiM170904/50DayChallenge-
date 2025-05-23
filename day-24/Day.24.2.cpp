class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int nf = 0; 
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[nf] = nums[i]; 
                nf++;
            }
        }
    
        
        while (nf < n) {
            nums[nf] = 0;
            nf++;
        }
        
    }
};  
// The code defines a class Solution with a public method moveZeroes that takes a vector of integers nums as input and moves all zeroes to the end of the vector while maintaining the relative order of the non-zero elements.
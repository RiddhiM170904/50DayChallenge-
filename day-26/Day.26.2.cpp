class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = nums.size();
        vector<int> y;
        vector<int> n;
        vector<int> l;
        
        for(int i=0;i<s;i++){
            if(nums[i]==target){
                l.push_back(i);
            }
        }
        if (l.size()==1){
            y.push_back(l[0]);
            y.push_back(l[0]);
        }
        if(l.size()>=2){
            y.push_back(l[0]);
            y.push_back(l[l.size()-1]);
        }
    
        n.push_back(-1);
        n.push_back(-1);

        if(y.size()<1){
            return n;
        }
        
        return y;
    }
};
// The code defines a class Solution with a public method searchRange that takes a vector of integers nums and an integer target as input. It searches for the first and last positions of the target in the sorted array nums. If the target is found, it returns a vector containing the first and last indices; otherwise, it returns a vector with two -1 values indicating that the target is not present in the array.

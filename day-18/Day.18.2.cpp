class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int x=nums.size();
        int y=s.size();
        if(x==y){
            return false;
        }
        else{
            return true;
        }
    }
};

// The above code defines a class Solution with a public method containsDuplicate that takes a vector of integers nums as input. It checks if there are any duplicate elements in the vector by inserting the elements into a set, which automatically handles duplicates. The method compares the size of the original vector with the size of the set. If they are equal, it means there are no duplicates; otherwise, it returns true indicating that duplicates exist.
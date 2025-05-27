class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int tmp = b;
            b = a % b;
            a = tmp;
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b; 
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            long long currLcm = nums[i];
            if (currLcm == k)
                count++;

            for (int j = i + 1; j < n; ++j) {
                currLcm = lcm(currLcm, nums[j]);
                if (currLcm > k)
                    break;
                if (currLcm == k)
                    count++;
            }
        }

        return count;
    }
};
// description: This code defines a function to count the number of contiguous subarrays whose least common multiple (LCM) equals a given integer k.
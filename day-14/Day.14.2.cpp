class Solution {
public:
    int reverse(int x) {
        int ans =0;
        while(x!=0){
            int digit = x%10;
            if ((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                return 0;
            }
            ans=(ans*10)+digit;
            x=x/10;
        }
        return ans;
    }
};
// The above code defines a class Solution with a public method reverse that takes an integer x as input and returns its reverse. It checks for overflow conditions using INT_MAX and INT_MIN to ensure that the reversed integer does not exceed the limits of a 32-bit signed integer. If it does, the method returns 0.
class Solution {
public:
    int countOdds(int low, int high) {
        int num = 0;
        for(int i=low;i<=high;i++){
            if(i%2!=0){
                num++;
            }
        }
        return num;
    }
};
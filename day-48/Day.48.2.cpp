class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorVal = x ^ y;
        int distance = 0;
        while (xorVal) {
            distance += (xorVal & 1); 
            xorVal >>= 1;   
        }
        return distance;
    }
};
// description: This code defines a function to calculate the Hamming distance between two integers, x and y. The Hamming distance is the number of positions at which the corresponding bits are different. The function computes the XOR of x and y, which highlights the differing bits. It then counts the number of set bits (1s) in the XOR result by checking each bit position using a while loop. The time complexity is O(log(max(x, y))) since it processes each bit of the larger number.
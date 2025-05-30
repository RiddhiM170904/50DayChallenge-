class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for(int i=0;i<n;i++){
            int left=0,right=n-1;
            while(left<=right){
                int temp = image[i][left]^1;
                image[i][left] = image[i][right]^1;
                image[i][right] = temp;

                left++;
                right--;
            }
        }
        return image;
    }
};
// description: This code defines a function to flip and invert a binary image represented as a 2D vector. It iterates through each row of the image, swapping elements from the left and right ends while inverting their values (0 becomes 1 and 1 becomes 0). The function returns the modified image as a 2D vector. The flipping is done in place, and the time complexity is O(n^2) where n is the number of rows in the image.
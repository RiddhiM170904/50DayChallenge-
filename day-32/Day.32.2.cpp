class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> vec;

        for(int i = 0; i < matrix.size(); i++){
            vector<int> temp;
            for(int j = 0; j < matrix[i].size(); j++){
                temp.push_back(matrix[j][i]);
            }

            reverse(temp.begin(), temp.end());

            vec.push_back(temp);
        }

        matrix = vec;
    }
};

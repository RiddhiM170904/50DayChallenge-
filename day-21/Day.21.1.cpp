class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);
        for (int i = 1; i < rowIndex; ++i) {
            for (int j = i; j > 0; --j) {
                row[j] = row[j] + row[j - 1];
            }
        }
        return row;
    }
};
// The above code defines a class Solution with a public method getRow that takes an integer rowIndex as input. It generates the rowIndex-th row of Pascal's triangle. The method initializes a vector row with size rowIndex + 1, filled with 1s. It then iterates through the rows and updates the values in the vector using a nested loop. Finally, it returns the generated row.
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string columnTitle;
        while (columnNumber > 0) {
            columnNumber--; // Adjust for 0-based indexing
            int remainder = columnNumber % 26;
            columnTitle += ('A' + remainder);
            columnNumber /= 26;
        }
        reverse(columnTitle.begin(), columnTitle.end());
        return columnTitle;
    }
};

// The above code defines a class Solution with a public method convertToTitle that takes an integer columnNumber as input and returns its corresponding Excel column title as a string. It uses a loop to convert the number to a base-26 representation, adjusting for 0-based indexing, and constructs the title by appending characters from 'A' to 'Z'. Finally, it reverses the string to get the correct order before returning it.
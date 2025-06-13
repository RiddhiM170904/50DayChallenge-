class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustCounts(n + 1, 0);
        for (const auto& t : trust) {
            int a = t[0]; 
            int b = t[1];

            trustCounts[a]--;
            trustCounts[b]++;
        }
        for (int i = 1; i <= n; ++i) {
            if (trustCounts[i] == n - 1) {
                return i;
            }
        }
        return -1;
    }
};

// description: This code defines a function to find the town judge in a trust relationship scenario. It uses an array to keep track of trust counts for each person. For each trust relationship, it decreases the count for the person who trusts and increases the count for the person who is trusted. After processing all relationships, it checks for a person whose trust count equals n - 1 (indicating they are trusted by everyone else). If such a person exists, their index is returned; otherwise, -1 is returned. The time complexity is O(t + n) where t is the number of trust relationships and n is the number of people.
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root) return 0; 
        int leftDepth = maxDepth(root->left);  
        int rightDepth = maxDepth(root->right); 
        return max(leftDepth, rightDepth) + 1;
    }
};
// description: This code defines a function to calculate the maximum depth of a binary tree. It uses recursion to traverse the tree, returning 0 for an empty node and calculating the maximum depth by comparing the depths of the left and right subtrees, adding 1 for the current node. The function returns the maximum depth as an integer.
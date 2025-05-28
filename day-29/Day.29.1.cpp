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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;

        int sum = 0;

        if (root->left) {
            // Check if left child is a leaf
            if (!root->left->left && !root->left->right) {
                sum += root->left->val;
            } else {
                sum += sumOfLeftLeaves(root->left);
            }
        }

        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};

// description: This code defines a function to calculate the sum of all left leaves in a binary tree. It recursively checks each node and sums the values of left leaves while ignoring right leaves.

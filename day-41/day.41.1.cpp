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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else if (key > root->val) {
            root->right = deleteNode(root->right, key);  
        } else {
            
            if (!root->left && !root->right) {
                delete root;
                return nullptr;
            }

            if (!root->left || !root->right) {
                TreeNode* child = root->left ? root->left : root->right;
                delete root;
                return child;
            }

            TreeNode* successor = findMin(root->right);
            root->val = successor->val; 
            root->right = deleteNode(root->right, successor->val); 
        }

        return root;
    }
private:
    TreeNode* findMin(TreeNode* node) {
        while (node && node->left) {
            node = node->left;
        }
        return node;
    }
};
// description: This code defines a function to delete a node with a specific key from a binary search tree (BST). It handles three cases: if the node to be deleted has no children, one child, or two children. In the case of two children, it finds the in-order successor (the smallest node in the right subtree), replaces the value of the node to be deleted with that of the successor, and then deletes the successor. The function returns the modified tree. The time complexity is O(h) where h is the height of the tree.
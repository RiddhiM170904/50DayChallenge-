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
    void flatten(TreeNode* root) {
                if(!root)return;
            TreeNode*mover=root;
            while(mover){
                if(mover->left){
                    TreeNode*temp=mover->left;
                    while(temp->right)temp=temp->right;
                    temp->right=mover->right;
                    mover->right=mover->left;
                    mover->left=nullptr;
                }
                mover=mover->right;

            }
    }
};

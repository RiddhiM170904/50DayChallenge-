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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            return new TreeNode(val);
        }
        TreeNode* temp=root;
        while(true)
        {
            if(root->val<val)
            {
                if(root->right==NULL)
                {
                    root->right=new TreeNode(val);
                    break;
                }
                root=root->right;
            }
            else
            {
                if(root->left==NULL)
                {
                    root->left=new TreeNode(val);
                    break;
                }
                root=root->left;
            }
        }
        return temp;
    }
};
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {};
        queue<TreeNode*> q;
        TreeNode* cur = root;
        vector<vector<int>> level;
        q.push(cur);
        while (!q.empty()) {
            int n = q.size();
            vector<int> v;

            for (int i = 0; i < n; i++) {
                TreeNode* temp = q.front();
                v.push_back(temp->val);
                q.pop();

                if (temp->left) {
                    q.push(temp->left);
                }
                if (temp->right) {
                    q.push(temp->right);
                }
            }
            level.push_back(v);
        }
        return level;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans = levelOrder(root);
        vector<int> v;
        for(int i=0;i<ans.size();i++){
            int x = ans[i].size();
            if(x!=0){
                v.push_back(ans[i][x-1]);
            }
        }
        return v;
    }
};

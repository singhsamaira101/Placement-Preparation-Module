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
        
        vector<vector<int>> ans;
            vector<int> level;
        
        
        if(!root)
            return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size()>0) {
            int s = q.size();
            for(int i=0;i<s;i++) {
                root = q.front();
                q.pop();
                level.push_back(root->val);
                
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            ans.push_back(level);
            level.clear();
        }
        return ans;
    }
};
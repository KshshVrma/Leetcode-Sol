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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>lol;
        if(root==NULL)return lol;
                vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            
            for(int i=0;i<size;i++){
                TreeNode*node=q.front();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                
                temp.push_back(node->val);
                q.pop();
                
            }
            ans.push_back(temp);
        }
        
        for(int i=0;i<ans.size();i++){
            int k=ans[i].size();
           lol.push_back(ans[i][k-1]);
        }
        return lol;
    }
};
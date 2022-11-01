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
    void f(TreeNode*root,vector<int>&vec){
        if(root==NULL)return ;
        f(root->left,vec);
        vec.push_back(root->val);
        f(root->right,vec);
    }
    bool isValidBST(TreeNode* root) {
        vector<int>vec;
        unordered_map<int,int>mp;
        
        f(root,vec);
        for(int i=0;i<vec.size();i++){
auto it=mp.find(vec[i]);
            if(it!=mp.end())return false;
            mp[vec[i]]++;
        }
        if(is_sorted(vec.begin(),vec.end())){
            return true;
        }
        return false;
        
    }
};
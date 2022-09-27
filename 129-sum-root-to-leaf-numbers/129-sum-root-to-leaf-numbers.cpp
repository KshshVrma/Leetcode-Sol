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
void f(TreeNode*root,vector<string>&ans,string s){
      if(root==NULL){
        return ;
    }
    if(root->left==NULL&&root->right==NULL){
        string t=to_string(root->val);
        s+=t;
        ans.push_back(s);
        return ;
    }
  string t=to_string(root->val);
        s+=t;
    f(root->left,ans,s);
    f(root->right,ans,s);
    
    
}
    int sumNumbers(TreeNode* root) {
      vector<string>ans;
        string s="";
        f(root,ans,s);
        int count=0;
        for(int i=0;i<ans.size();i++){
           
                count+=stoi(ans[i]);
            
        }
        return count;
    }
};
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
    void f(TreeNode*root,int val){
           if(val<=root->val){
           if(root->left==NULL){
               root->left=new TreeNode(val);
               return ;
           }
               f(root->left,val);
               
       }
        else{
            if(root->right==NULL){
                root->right=new TreeNode(val);
                return;
                
            }f(root->right,val);
        }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
                    TreeNode *p=new TreeNode(val);
        if(root==NULL){

            return p;
        }
    f(root,val);
        return root;
    }
};
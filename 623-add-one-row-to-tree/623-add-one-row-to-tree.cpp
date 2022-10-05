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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(root == NULL) return root;
    
    if(depth - 1 == 0)
    {
        TreeNode* newNode = new TreeNode(val);
        newNode->left = root;
        return newNode;
    }
    
    if(depth - 1 == 1)
    {
        TreeNode* left = new TreeNode(val);
        TreeNode* right = new TreeNode(val);
        
        TreeNode* temp;
        
        temp = root->left;
        root->left = left;
        left->left = temp;
        
        temp = root->right;
        root->right = right;
        right->right = temp;
        
        return root;
    }
    
    addOneRow(root->left, val, depth - 1);
    addOneRow(root->right, val, depth - 1);
    
    return root;
    }
};
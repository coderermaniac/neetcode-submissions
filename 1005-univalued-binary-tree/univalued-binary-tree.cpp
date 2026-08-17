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
    bool isUnivalTree(TreeNode* root) {
        int cur=root->val;
         return dfs(root,cur);       
    }
    bool dfs(TreeNode* root,int cur){
        if(root==NULL)return true ;
        if(root->val!=cur)return false ;
        return dfs(root->left,cur)&&dfs(root->right,cur);
    }
};
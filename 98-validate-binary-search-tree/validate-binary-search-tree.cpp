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
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true ;
        long long  lb=LONG_MIN;
        long long  hb=LONG_MAX;
        return checkbst(root,lb,hb);
    }

    bool checkbst(TreeNode*root,long long lb,long long hb){
        if(root==NULL)return true;
        if(root->val>=hb||root->val<=lb)return false ;
        return checkbst(root->left,lb,root->val)&& checkbst(root->right,root->val,hb);
    }
};
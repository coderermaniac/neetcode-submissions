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
    void dfs(TreeNode*root,set<string>&st,string ans){
        if(root==NULL)return;
        ans=char('a'+root->val)+ans;
        if(!root->left&&!root->right){
            st.insert(ans);
            return;
        }
        dfs(root->left,st,ans);
        dfs(root->right,st,ans);


    }
    string smallestFromLeaf(TreeNode* root) {
        set<string>st;
        string ans="";
        dfs(root,st,ans);
        return *st.begin();

        
    }
};
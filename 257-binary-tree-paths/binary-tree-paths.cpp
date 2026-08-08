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
    void convert(TreeNode* root ,vector<int>&value,vector<string>&ans){
        if(root==NULL)return ;
        value.push_back(root->val);
        if(!root->left&& !root->right){
            string s=to_string(value[0]);
            for(int i=1;i<value.size();i++){
                s+="->"+ to_string(value[i]);
            }
            ans.push_back(s);
        }
        else{
            convert(root->left,value,ans);
            convert(root->right,value,ans);
        }
        value.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int>value;
        vector<string>ans;
        convert(root,value,ans);
        return ans;
        
    }
};
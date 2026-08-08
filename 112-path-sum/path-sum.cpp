#include <queue>
#include <utility>

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;

        std::queue<std::pair<TreeNode*, int>> q;
        q.push({root, root->val});

        while (!q.empty()) {
            auto [node, currentSum] = q.front();
            q.pop();

            if (!node->left && !node->right && currentSum == targetSum) {
                return true;
            }

            if (node->left) {
                q.push({node->left, currentSum + node->left->val});
            }

            if (node->right) {
                q.push({node->right, currentSum + node->right->val});
            }
        }

        return false;
    }
};
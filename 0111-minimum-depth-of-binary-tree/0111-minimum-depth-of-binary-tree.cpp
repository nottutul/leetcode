/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int maxL = minDepth(root->left) + 1;
        int maxR = minDepth(root->right) + 1;
        if (min(maxL, maxR) == 1) {
            return max(maxL, maxR);
        }
        return min(maxL, maxR);
    }
};
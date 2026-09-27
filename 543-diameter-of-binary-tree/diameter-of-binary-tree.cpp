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
    int max_diameter = 0;

    int dia(TreeNode* node) {
        if (node == nullptr) return 0;

        int leftdepth = dia(node->left);
        int rightdepth = dia(node->right);

        // Update global maximum diameter found so far
        max_diameter = max(max_diameter, leftdepth + rightdepth);

        // Return height of this subtree to the parent
        return 1 + max(leftdepth, rightdepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        max_diameter = 0; // Reset for each test case
        dia(root);
        return max_diameter;
    }
};
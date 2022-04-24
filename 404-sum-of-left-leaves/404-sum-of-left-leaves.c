/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int is_leaf(struct TreeNode *node) {
    if (node == NULL) {
        return false;
    }
    if ((node->left == NULL) && (node->right == NULL)) {
        return true;
    } else {
        return false;
    }
}

int sumOfLeftLeaves(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }
    int ans = 0;
    if (is_leaf(root->left)) {
        ans += root->left->val;
    } else {
        ans += sumOfLeftLeaves(root->left);
    }
    
    ans += sumOfLeftLeaves(root->right);
    
    return ans;
}

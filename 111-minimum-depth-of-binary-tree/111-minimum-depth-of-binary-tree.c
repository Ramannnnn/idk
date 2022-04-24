/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }
    if ((root->left == NULL) && (root->right == NULL)) {
        return 1;
    }
    int left = 10000;
    int right = 10000;
    if (root->left != NULL) {
        left = minDepth(root->left);
    }
    if (root->right != NULL) {
        right = minDepth(root->right);
    }
    if (left < right) {
        return left + 1;
    }
    else {
        return right + 1;
    }  
}
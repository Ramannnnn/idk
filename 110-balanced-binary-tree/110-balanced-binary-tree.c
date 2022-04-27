/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int getHeight(struct TreeNode *root) {
    if (root == NULL) {
        return 0;
    }
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    
    if (left >= right) {
        return left + 1;
    } else {
        return right + 1;
    }
}

int abs(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

bool isBalanced(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    
    int left = getHeight(root->left);
    int right = getHeight(root->right);
    
    int diff = abs(left - right);
    
    if ((diff <= 1) && (isBalanced(root->left) && (isBalanced(root->right)))) {
        return true;
    } else {
        return false;
    } 
}
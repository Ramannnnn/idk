/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode *new_node(int val) {
    struct TreeNode *node = malloc(sizeof(*node));
    node->val = val;
    node->right = NULL;
    node->left = NULL;
    printf("new node created with key %d\n", node->val);
    return node;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if (root == NULL) {
        return new_node(val);
    }
    if (val <= root->val) {
        root->left = insertIntoBST(root->left, val);
    } else if (val > root->val) {
        root->right = insertIntoBST(root->right, val);
    }
    
    return root;
}
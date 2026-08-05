// LCA of BST
// Time: O(H), Space: O(1)
struct TreeNode { int val; TreeNode *left, *right; };
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    while(root) {
        if(root->val > p->val && root->val > q->val) root = root->left;
        else if(root->val < p->val && root->val < q->val) root = root->right;
        else break;
    }
    return root;
}
// Tree Traversals (Inorder, Preorder, Postorder)
// Time: O(N), Space: O(H)
struct Node { int data; Node *left, *right; };
void inorder(Node* root) { if(!root) return; inorder(root->left); inorder(root->right); }
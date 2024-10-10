/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution
{
    public:
    int sum(Node* root) {
    if (root == NULL)
        return 0;
    return sum(root->left) + root->data + sum(root->right);
}

bool isSumTree(Node* root) {
    if (root == NULL || (root->left == NULL && root->right == NULL))
        return true;

    int left_sum = sum(root->left);
    int right_sum = sum(root->right);

    if (root->data == left_sum + right_sum && isSumTree(root->left) && isSumTree(root->right))
        return true;

    return false;
}
};

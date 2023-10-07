class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
    if(node==NULL){
        return 0;
    }
    int leftsubtree=height(node->left);//heigtht of left subtree.
    int rightsubtree=height(node->right);//height of right subtree.
    
    int ans=max(leftsubtree,rightsubtree)+1;//store the max of left and right subtree and add 1 for the root node.
    
    return ans;
    }
class Solution{
    public:
    int height(Node* root){
        if(root==NULL){
            return 0;
        }
        
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return 1;
        }
        int l=height(root->left);
        int r= height(root->right);
        
        int diff=abs(r-l);
        
        if(diff<=1 && isBalanced(root->left) && isBalanced(root->right)){
            
            return 1 ;
            
        }
        else{
            return 0;
        }
        
        
        
        
        
    }
};
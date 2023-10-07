class Solution {
  public:
    int height(Node* root, int &ans){
    if(root == NULL){
        return 0;
    }
    int left_height= height(root->left,ans);// height of left subtree.
    int right_height= height(root->right,ans);//height of right subtree.
    
    ans= max(ans,1 + left_height + right_height);
    
    return max(left_height,right_height) + 1;    
    }
    //in this function we update the "ans" variable every time we get the height of left subtree and right subtree.and ofcoure returning the heigtht for the next subtree of node.  

    //the ans variable contains diameter of the tree.



    int diameter(Node* root) {
        
        if(root==NULL){
            return 0;
        }
        
        int ans;
        height(root,ans);
        
        return ans;
    }
    // in this we will call the height function and we will get the diameter of tree
    //so we have to just return the ans variable which contains the diameter of the tree.
};
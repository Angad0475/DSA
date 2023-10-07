class Solution
{
public:
int max_height=0;
int max_sum=0;

     void solve(Node* root,int height,int sum){
         
         if(root==NULL){ 
             return;
         }
         
         if(height>max_height){
             max_height=height;
             max_sum=max(max_sum,sum+root->data);
         }
     solve(root->left,height+1,sum+root->data);
     solve(root->right,height+1,sum+root->data);
}
    int sumOfLongRootToLeafPath(Node *root)
    {
        
        solve(root,0,0);
        
        return max_sum;
    }
};
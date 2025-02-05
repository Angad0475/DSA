class Solution {
public:
             void solve(TreeNode* root, int level,vector<int>&res){
                if(!root){
                    return;
                }
                if(res.size()==level){
                    res.push_back(root->val);
                }
                solve(root->right,level+1,res);
                solve(root->left,level+1,res);
             }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>arr;
        solve(root,0,arr);
        return arr;
    }
};

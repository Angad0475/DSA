var diameterOfBinaryTree = function(root) {
     if(!root){
        return 0;
     }
     let maxDiameter =0;

     const dfs =(node)=>{
        if(!node){
            return 0;
        }
        let left = dfs(node.left);
        let right =dfs(node.right);

        maxDiameter= Math.max(maxDiameter,left+right);

        return Math.max(left,right) + 1;
     }
     dfs(root);

     return maxDiameter;

};


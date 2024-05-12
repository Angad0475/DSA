var inorderTraversal = function(root) {
    let result =[];

    const search=(node)=>{
        if(node==null){
            return;
        }
        search(node.left);
        result.push(node.val);
        search(node.right);
         
    } 
    search(root);
    return result;

    
};

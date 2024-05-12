var preorderTraversal = function(root) {
    let result=[];
    const search =(node)=>{
        if(node==null){
            return;
        }

        result.push(node.val); //we get the val of the root node.
        search(node.left); // we call for the root's left child.
        search(node.right);//we call for the root's right child.
    }

        search(root);
        return result;
};

var postorderTraversal = function(root) {
    var result=[];
    const search=(node)=>{
        if(node==null){
            return;
        }
        search(node.left); //call for the left child. (just eave the values of left child and right child on recusrsion leaf of faith).
        search(node.right);//call for the right child.
        result.push(node.val);// pushing the value of root itself.
    }

    search(root);
    return result;

    
};

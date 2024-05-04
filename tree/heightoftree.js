//class Node{
   constructor(val){
this.val=val;
this.left=null;
this.right=null;
   }
}//             //a node containing root value and left child and rght child.


var maxDepth = function(root) {
    if (root===null){
        return 0;
    }
    var leftSubtree= maxDepth(root.left); //recusrsivly go tohe leftmost leaf node.
    var rightSubtree =maxDepth(root.right);//recursivly go to the rightmost leaf node.

    var result = Math.max(leftSubtree,rightSubtree)+1; // get the max of left node and right node and add the root node(+1).

    return result; //return the result .
};

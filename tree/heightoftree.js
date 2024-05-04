//class Node{
   constructor(val){
this.val=val;
this.left=null;
this.right=null;
   }
}//


var maxDepth = function(root) {
    if (root===null){
        return 0;
    }
    var leftSubtree= maxDepth(root.left);
    var rightSubtree =maxDepth(root.right);

    var result = Math.max(leftSubtree,rightSubtree)+1;

    return result;
};

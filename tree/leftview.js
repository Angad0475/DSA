function solve(root,level,res){
    if(!root){
        return;
    }
    if(res.length===level){
        res.push(root.val)
    }
    solve(root.left,level+1,res);
    solve(root.right,level+1,res);
}



var leftSideView = function(root) {
    var res=[];
    solve(root,0,res);
    return res;

};

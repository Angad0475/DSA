var isSameTree = function(p, q) {
    
    if (p == undefined && q == undefined)
    {
        return true;
    }

    if(p == undefined || q == undefined)
    {
        return false;
    }

    if(p.val != q.val) //IF THE RIIT VALUR IS NOT EQUAL THEN WE WILL RETURN FALSE ELSE WE WILL RETURN   FOR THE RIGHT TREE ND LEFT SUBTREE.
    {
        return false;
    }

    return isSameTree(p.left, q.left) && isSameTree(p.right, q.right);
};

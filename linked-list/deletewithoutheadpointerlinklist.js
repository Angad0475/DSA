
var deleteNode = function(node) {
     if(node.next===null){
        return;
     }
    else{
        if(node.next!==null){     
    var prev= node;
     var curr= node.next;
     var nxt_nxt= node.next.next;

     prev.val= curr.val;
     prev.next=nxt_nxt;
    }
    }

     
};

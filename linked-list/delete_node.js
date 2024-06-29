var deleteNode = function(node) {
    if(node.next==null){
        return;
    }
    if(node.next!=null){
    var prev =node;
    var curr=node.next;
    var next_next= node.next.next;

    prev.val=curr.val;
    prev.next=next_next;

    }

};

class node{
    constructor(val,next){
        this.data=val;
        this.next=null;
    }

    let head= new node(val,next);

var reverseList = function(head) { //head is the first node.
    let current=head;
    let prev= null;
    let next =null;
    while(current!=null){
            next=current.next;
            current.next=prev;
            prev=current;
            current=next;
    }
    head=prev; //at last the prev variable containg the node is now contained by head variable. so that we can call the linklist by the head.
    return head;
};

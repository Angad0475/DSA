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
    head=prev;
    return head;
};

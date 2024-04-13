var removeNthFromEnd = function(head, n) {

    let slow =head;
    let fast = head;

    for(let i=0;i<n;i++){
        fast=fast.next;  //traverse the fast pointer to the nth node till the next of fast pointer points towards the nth node.
    }
     if(!fast) return head.next; //in case if the nth node is the head then return the head.next.
    
    
    while(fast.next!==null){ //now move the slow pointer and fast pointer(from that point) simontanously until fast.next is not null.
        slow=slow.next;
        fast=fast.next;
    }
// the slow's next points towards the nth node which is to be removed.
    slow.next= slow.next.next; // now connect slow.next to the slow'snext'next.

    return head; //we will return the linklist.
};

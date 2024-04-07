var detectCycle = function(head) {
    let slow= head;
    let fast = head;

    while( fast && fast.next && fast.next.next){
        slow=slow.next;
        fast=fast.next.next;

        if(slow===fast){ //loop is detected.
                slow=head;//slow variable is takn back to head node and fast variable is there where it is .
                while(slow!==fast){ //then again starting from starting head node
                    slow=slow.next;
                    fast=fast.next;
                }
                fast.next=null;
                return slow;
        }
    }
    return null;


};

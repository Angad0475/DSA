
var deleteNode = function(node) {
     if(node.next===null){
        return;
     }
          
    else {
    var prev= node;
     var curr= node.next;  
     var nxt_nxt= node.next.next;

     prev.val= curr.val;    
     prev.next=nxt_nxt; 
     }

     //The most efficient approach to deleting a node without the head pointer involves changing 
      //the current node’s value to the value of the next node and updating the next pointer
     //of the current node to its next's next node. 
};

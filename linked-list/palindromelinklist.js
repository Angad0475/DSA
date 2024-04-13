var isPalindrome = function(head) {
         let stack=[];
         let curr =head; 
         while(curr){      //traverse and inserting the elements into stack.
            stack.push(curr.val);
            curr=curr.next;
         }
         while(head){          //after inserting we will traverse again 
                               //by comparing head with popped value 
            if(head.val != stack.pop()){
                return false; //if the head value is not equal to the popped value
                              //then it is not a palindrome. and break it .
                break;
            }
            head=head.next; // and we will also change the position of head with traversing. 
         }
         return true;
};

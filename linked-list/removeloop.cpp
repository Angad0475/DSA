 void removeLoop(Node* head)
    {
        Node *slow = head;
       Node *fast = head;

       //Detecting whether a loop is present or not
       while(slow!=NULL && fast!=NULL && fast->next!=NULL){
           fast=fast->next->next;
            slow=slow->next;
           
       
           if(slow == fast) {
               
              break;
           }
       }
       slow=head;
        
        //edge case
        if(slow == fast) {
            while(fast->next != slow) {
                fast = fast->next;
            }
            
            fast->next = NULL;
            return;
        }

        //Traversing just before the starting node of loop
        while(slow->next != fast->next){
           slow = slow->next;
           fast = fast->next;
        }
    
       //Make the last node point to NULL
       fast->next = NULL;  
    }
};
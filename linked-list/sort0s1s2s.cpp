class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        //intializing counts
        int zeroCount=0;
        int oneCount=0;
        int twoCount=0; 
        
        Node* temp= head;
        //traverse the linklist and count the number of 0s 1s and 2s.
        while(temp!=NULL){
            if(temp->data==0){
                zeroCount++;
            }
            else if(temp->data==1){
                oneCount++;
            }
            else if(temp->data==2){
                twoCount++;
            }
            temp=temp->next;
        }
        //now just replace the data of linklist with 0s 1s 2s in a sorted way.
        temp=head;
        while(temp!=NULL){
            if(zeroCount!=0){
                temp->data=0;//until  all the 0s is inserted decrease the count.
                zeroCount--;
            }
            else if(oneCount!=0){
                temp->data=1;//until all the 1s is inserted decrease the count.
                oneCount--;
            }
            else if(twoCount!=0){
                temp->data=2;// until all the 2s is inserted decrease the count. 
                twoCount--;
            }

            temp=temp->next;
        } 
        //we get the linklist with sorted 0s 1s 2s.
        return head;
    }
};

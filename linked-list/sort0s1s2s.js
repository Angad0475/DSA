class Solution {
    //Function to sort a linked list of 0s, 1s and 2s.
    segregate(head)
    {
        let zeroCount =0;
        let oneCount =0;
        let twoCount =0;
        
        let temp = head;
        
        
        while(temp){// count the number of 0s 1s and 2s in the first traversal.
            if(temp.data==0){
                zeroCount++;
            }
            else if(temp.data==1){
                oneCount++;
            }
            else if(temp.data==2){
                twoCount++;
            }
            temp=temp.next;
            
        }
        temp= head; //then traverse again and put all the 0s 1s and 2s in a sorted order.
        while(temp){
            if(zeroCount!==0){
                temp.data=0;
                zeroCount--;
            }
             else if(oneCount!==0){
                temp.data=1;
                oneCount--;
            }
            else if(twoCount!==0){
                temp.data=2;
                twoCount--;
            }
            temp=temp.next;
            
        }
        return head;
        
    }
}

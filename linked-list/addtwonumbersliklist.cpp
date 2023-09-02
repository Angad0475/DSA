class Solution
{
    public:
    Node* reverselinklist(Node* head)
    {
        Node *curr=head;
        Node *prev=NULL;
        Node *nxt=NULL;
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
            
        }
        head=prev;
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverselinklist(first);/*the first(head) pointer will point towards to the head of this linklist*/
        second= reverselinklist(second);/*same goes with this linklist also*/
        
        int sum=0;
        int carry= 0;
        
        Node *temp=NULL;/*for the result linklist*/
        Node *head=NULL;
        Node *tail=NULL;
        
        while(first!=NULL && second !=NULL){
            sum= carry + first->data + second->data; /*for the first elemnt */
            
                                                 /*operators where '?' means true and ':' means false and the way first and second is writen that means if (first!=NULL) and (second !=NULL) */
            
            int digit=sum%10; /*digit will be the last digit of the value (reminder after dividing the sum by 10)*/
           
            
            temp=new Node(digit);
            carry=sum/10;/*the temp node will contaon the summed value of the two linklist*/
            
            if(head==NULL){
                head=temp;/*temp is declared head*/
            }
            else
            {
                tail->next=temp; /*if head is not null tail pointer  will continue the temp */
            }
            tail=temp;
            
  
                first=first->next; /*lets go for the next value int he linklist f the first elemnt is done */
                
                second=second->next;
        }
        
        while(first!=NULL){
            sum= carry + first->data; /*for the first elemnt */
                                   /*operators where '?' means true and ':' means false and the way first and second is writen that means if (first!=NULL) and (second !=NULL) */
            
            int digit=sum%10; /*digit will be the last digit of the value (reminder after dividing the sum by 10)*/
           
            
            temp=new Node(digit);
            carry=sum/10;/*the temp node will contaon the summed value of the two linklist*/
            
            if(head==NULL){
                head=temp;/*temp is declared head*/
            }
            else
            {
                tail->next=temp; /*if head is not null tail pointer  will continue the temp */
            }
            tail=temp;
            
  
                first=first->next; /*lets go for the next value int he linklist f the first elemnt is done */

        }
        
        while(second !=NULL){
            sum= carry + second->data; /*for the first elemnt */
            
                                                 /*operators where '?' means true and ':' means false and the way first and second is writen that means if (first!=NULL) and (second !=NULL) */
            
            int digit=sum%10; /*digit will be the last digit of the value (reminder after dividing the sum by 10)*/
           
            
            temp=new Node(digit);
            carry=sum/10;/*the temp node will contaon the summed value of the two linklist*/
            
            if(head==NULL){
                head=temp;/*temp is declared head*/
            }
            else
            {
                tail->next=temp; /*if head is not null tail pointer  will continue the temp */
            }
            tail=temp;
            /*lets go for the next value int he linklist f the first elemnt is done */
                
                second=second->next;
        }        
        
        
        if(carry>0){
             tail->next = new Node(carry);
        }
        
        head=reverselinklist(head);
        return head;
    }
};

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        Node *prev=NULL;
        Node *nxt=NULL;
        Node *curr= head;
        
        while(curr!=NULL)
        {
            nxt= curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        
        }
        head=prev;
    }
    
};
    
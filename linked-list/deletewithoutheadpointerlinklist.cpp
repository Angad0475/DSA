#include<iostream>

class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
        if(del->next==NULL)
        {
            return;
        }
        
        Node *prev=del;
        Node *curr=del->next;
        Node *nxt_nxt=del->next->next;
        
        prev->data=curr->data;
        prev->next=nxt_nxt;
        
        free(curr);
        
        return;
    }
        
    

};

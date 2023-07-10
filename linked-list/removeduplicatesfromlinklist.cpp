/*to remove same elemnts in a linklist*/
Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    
    while(curr->next)
    {
        if(curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            free(curr->next);
            curr->next=next_next;
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;
}    

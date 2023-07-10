int getNthFromLast(Node *head, int n)
{
      Node *first=head;
      Node *second=head;
      
      
      for (int i=1;i<n;i++)
      {
          second=second->next;
          if(second==NULL)
          {
              return -1;
          }
      }
      while(second->next!=NULL){
          first=first->next;
          second=second->next;
      }
      
      return first->data;
      
      
      
}


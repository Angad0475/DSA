#include<iostream>
using namespace std;
Node* sortedMerge(Node* head1, Node* head2)  
{  
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data>head2->data){
        Node*temp=head1;
        head1=head2;
        head2=temp;
    }
        Node *ans=head1;
    
    while(head1 && head2 !=NULL)
    {
        Node *temp=head1;
        while(head1 && head1->data<=head2->data){
            temp=head1;
            head1=head1->next;
        }
        temp->next=head2;
        
        Node *tmp=head1;
        head1=head2;
        head2=tmp;
    }
    
    return ans;
}  
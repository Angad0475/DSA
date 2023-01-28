#include<iostream>
using namespace std;
 
struct node {
    int data;
   node *next;
};
 
// This function prints contents of linked list starting
// from the given node
void printList(node *n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
// Driver's code
int main()
{
     node *head = NULL;
      node  *second = NULL;
    node *third = NULL;
 
    // allocate 3 nodes in the heap
    head = (node*)malloc(sizeof(struct node));
    second = (node*)malloc(sizeof(struct node));
    third = (node*)malloc(sizeof( struct node));

    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
 
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    // Function call
    printList(head);
 
    return 0;
}
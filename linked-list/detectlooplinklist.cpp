class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *slow= head;// this is a slow fast pointer algorithm.
        Node *fast= head;
        
        while(fast!=NULL && fast->next!=NULL)// cuz fast pointer is moving two nodes ahead thats why we go upto fast->next!=NULL.
        {
            slow =slow->next;     // we put slow and fast pointers the fast pointer is always set two nodes ahead.
            fast = fast->next->next;
            
            if(slow==fast){
                return true;  // if slow pointer meets the fast pointer then the loop is detected.
            }
        }
        return false; // otherwise the there is no loop.
    }
};

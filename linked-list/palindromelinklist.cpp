class Solution{
  public:
    
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        stack<int> s;
 
    // push all elements of the linked list into the stack
    Node* node = head;
    while (node)
    {
        s.push(node->data);
        node = node->next;
    }
 
    // traverse the linked list again
    node = head;
    while (node)
    {
        // pop the top element from the stack
        int top = s.top();
        s.pop();
 
        // compare the popped element with the current node's data
        // return false if mismatch happens
        if (top != node->data) {
            return 0;
        }
 
        // advance to the next node
        node = node->next;
    }
 
    // we reach here only when the linked list is a palindrome
    return 1;
}
   };

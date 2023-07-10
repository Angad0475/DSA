void MyStack ::push(int x) 
{
    StackNode *n;/*creating a node */
    n= new StackNode(x);
    if(top==NULL)
    {
        top=n;/*instead of head we are using top pointer */
        
    }
    else
    {
    n->next=top; /*if the first elemnt is filled then top pointer will be applied to thre next elemnt */
    top=n;
    }
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL){
        return -1;
    }
    int val=top->data; /*a val variable will assign to the data of the top pointer */
    StackNode *temp = top; /*a temp pointer will point to the top */
    top=top->next; /*top will be shifted*/
    free(temp); /*then we will free the top elemnt */
    return val;/*return the value of top elemnt */
    
}

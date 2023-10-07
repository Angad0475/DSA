Node* getSuccessor(Node* curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
        
    return curr;
    
}
Node *deleteNode(Node *root, int X) {
    if(root==NULL){
        return NULL;
    }
    if(X<root->data){
        root->left=deleteNode(root->left,X);
    }
    else if(X>root->data){
        root->right=deleteNode(root->right,X);
    }
    else{
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            Node* temp= root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->left!=NULL && root->right!=NULL){
            Node* succ=getSuccessor(root);
            root->data=succ->data;
            root->right=deleteNode(root->right,succ->data);
        }
    }
    
    return root;
}

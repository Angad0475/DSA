#include<iostream>
#include<queue>
using namespace std;

struct node {
        int data;
        node* left;
        node* right;
};

node* createnode(int d){
    node*temp=new node;
    temp->data=d;
    temp->left=NULL;
    temp->right=NULL;

}


node* buildTree(node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
     
    root= createnode(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}




int main() {

    node* root = NULL;

    
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    
    //creating a Tree
      root = buildTree(root);

    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 
    


    return 0;
}

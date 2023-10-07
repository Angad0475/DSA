class Solution
{
    public:
        Node* insert(Node* node, int data) {
        
              // Your code goes here
            if(node==NULL){
                return new Node(data);
            }
            if(node->data==data){
                return node;
            }
            else if(node->data<data){
                node->right=insert(node->right,data);
            }
            else{
                node->left=insert(node->left,data);
            }
            return node;
    }
    

};
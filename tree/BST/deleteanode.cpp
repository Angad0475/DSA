class Solution {
public:
    // Helper function to find the in-order successor
    TreeNode* successor(TreeNode* curr) {
        curr = curr->right;
        while (curr != NULL && curr->left != NULL) {
            curr = curr->left;
        }
        return curr;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL) {
            return NULL;
        }

        // If the key to be deleted is smaller than the root's key, then it lies in the left subtree
        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }
        // If the key to be deleted is greater than the root's key, then it lies in the right subtree
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }
        else {
            // Node to be deleted is found

            // Case 1: Node has no children (leaf node)
            if (root->left == NULL && root->right == NULL) {
                delete root;  // Deallocate memory
                return NULL;
            }
            // Case 2: Node has one child
            else if (root->left == NULL) {
                TreeNode* temp = root->right;
                delete root;  // Deallocate memory
                return temp;
            }
            else if (root->right == NULL) {
                TreeNode* temp = root->left;
                delete root;  // Deallocate memory
                return temp;
            }
            // Case 3: Node has two children
            else {
                // Find the inorder successor (smallest node in the right subtree)
                TreeNode* succ = successor(root);
                root->val = succ->val;  // Copy the successor's value to the current node
                // Delete the inorder successor
                root->right = deleteNode(root->right, succ->val);
            }
        }

        return root;
    }
};

#include "BST.h"

// creates then returns a new BSTNode
BSTNode* BST::CreateNode(int data) {
    BSTNode* newNode = new BSTNode();
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// inserts a new node with data into the BST
BSTNode* BST::Insert(BSTNode* node, int data) {
    if (node == nullptr) {
        return CreateNode(data);
    }
    if (data < node->data) {
        node->left = Insert(node->left, data);
    } else if (data > node->data) {
        node->right = Insert(node->right, data);
    }
    return node;
}

// searches for the provided data in the subtrees of node
bool BST::Search(BSTNode* node, int data) {
    if (node == nullptr) {
        return false;
    }
    if (node->data == data) {
        return true;
    }
    if (data < node->data) {
        return Search(node->left, data);
    } else {
        return Search(node->right, data);
    }
}

// counts the number of nodes in the tree or subtree with the provided root
int BST::CountNodes(BSTNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + CountNodes(root->left) + CountNodes(root->right);
}

// receives a text file containing one integer per line and inserts them into a bst
void BST::CreateTree(string file) {
    ifstream infile(file);
    int data;
    while (infile >> data) {
        root = Insert(root, data);
    }
    infile.close();
}

// returns true if the binary tree/subtree with the provided root is alr balanced
bool BST::isBalanced(BSTNode* node) {
    if (node == nullptr) {
        return true;
    }
    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);
    if (abs(leftHeight - rightHeight) > 1) {
        return false;
    }
    return isBalanced(node->left) && isBalanced(node->right);
}

// helper function to calculate the height of a tree/subtree
int BST::getHeight(BSTNode* node) {
    if (node == nullptr) {
        return 0;
    }
    return 1 + max(getHeight(node->left), getHeight(node->right));
}

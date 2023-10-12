#include <iostream>

// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = nullptr;
    }

    // Insert a new node into the binary tree
    void insert(int value) {
        Node* newNode = new Node(value);
        if (root == nullptr) {
            root = newNode;
        } else {
            insertRecursive(root, newNode);
        }
    }

    // Recursive function to insert a new node into the binary tree
    void insertRecursive(Node* currentNode, Node* newNode) {
        if (newNode->data < currentNode->data) {
            if (currentNode->left == nullptr) {
                currentNode->left = newNode;
            } else {
                insertRecursive(currentNode->left, newNode);
            }
        } else {
            if (currentNode->right == nullptr) {
                currentNode->right = newNode;
            } else {
                insertRecursive(currentNode->right, newNode);
            }
        }
    }

    // Display the elements of the binary tree in in-order traversal
    void displayInOrder() {
        displayInOrderRecursive(root);
        std::cout << std::endl;
    }

    // Recursive function to display the elements of the binary tree in in-order traversal
    void displayInOrderRecursive(Node* currentNode) {
        if (currentNode != nullptr) {
            displayInOrderRecursive(currentNode->left);
            std::cout << currentNode->data << " ";
            displayInOrderRecursive(currentNode->right);
        }
    }
};

int main() {
    BinaryTree myTree;

    // Inserting elements into the binary tree
    myTree.insert(5);
    myTree.insert(3);
    myTree.insert(7);
    myTree.insert(1);
    myTree.insert(4);

    // Displaying the binary tree in in-order traversal
    myTree.displayInOrder();

    return 0;
}

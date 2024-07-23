#include <iostream>
using namespace std;

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

class BinarySearchTree {
public:
    BinarySearchTree() {
        root = nullptr;
    }

    bool search(int value) {
        return searchHelper(root, value);
    }

    void insert(int value) {
        root = insertHelper(root, value);
    }

    void deleteNode(int value) {
        root = deleteHelper(root, value);
    }

private:
    Node* root;

    bool searchHelper(Node* node, int value) {
        if (node == nullptr) {
            return false;
        }
        if (value == node->data) {
            return true;
        }
        if (value < node->data) {
            return searchHelper(node->left, value);
        } else {
            return searchHelper(node->right, value);
        }
    }

    Node* insertHelper(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertHelper(node->left, value);
        } else if (value > node->data) {
            node->right = insertHelper(node->right, value);
        }
        return node;
    }

    Node* deleteHelper(Node* node, int value) {
        if (node == nullptr) {
            return node;
        }
        if (value < node->data) {
            node->left = deleteHelper(node->left, value);
        } else if (value > node->data) {
            node->right = deleteHelper(node->right, value);
        } else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }
            node->data = minValue(node->right);
            node->right = deleteHelper(node->right, node->data);
        }
        return node;
    }

    int minValue(Node* node) {
        int minv = node->data;
        while (node->left != nullptr) {
            minv = node->left->data;
            node = node->left;
        }
        return minv;
    }
};

int main() {
    BinarySearchTree bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    cout << "Searching for 20: " << (bst.search(20) ? "Found" : "Not Found") << endl;
    cout << "Searching for 90: " << (bst.search(90) ? "Found" : "Not Found") << endl;

    bst.deleteNode(20);
    cout << "After deleting 20, searching for 20: " << (bst.search(20) ? "Found" : "Not Found") << endl;

    return 0;
}

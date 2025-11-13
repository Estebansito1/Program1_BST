/*The purpose of this program is to show how Binary Search Tree works.
 * A BST is a data structure that organizes numbers so that every node that is smaller than
 * the node goes to the left and values larger goes to the right.
 * This program allows you to insert values search values if they exist and print the sorted values
 * using a inorder traversal.
 */
#include <iostream>  // used for printing outputs
using namespace std; //so I dont have to use std:: everytime when cout/cin endl

// node structure represents each element in the BST
    struct Node
    {
        int key; // stores the integers value on this node = key
        Node* left; // pointer to the left child, smaller value
        Node* right; // pointer to the right child larger value

        // the constructure initializes a node with the given key, with no child's yet
        Node(int k) : key(k), left(nullptr), right(nullptr) {}
    };
/////////////

// Function to insert a new key into the BST
    Node* insert(Node* root, int key)
    {
        if (!root) return new Node(key); // if the tree is empty, create a ew node
        if (key < root->key)
            root-> left= insert(root->left, key); // if smaller, inser to the left
        else if (key > root->key)
            root->right = insert(root->right, key); // if large, insert to the right
        return root; // return the unchanged root node
    }
//////////////

//functio to search for a specific key
    bool search(Node* root, int key)
    {
        if (!root) return false; // the tree is empty or did not reach a leaf
        if (key == root->key) return true; // key was found
        if (key < root-> key)
            return search(root-> left, key); //is smaller search the left side
        return search(root->right, key); // otherwise search the right side
    }
///////////////

// function to print the BST in sorte order using the inorder traversal
    void inorder(Node* root)
    {
        if (!root) return; // empty subtree
        inorder(root->left); // visit the left child first
        cout<<root->key<<" "; // print the current values
        inorder(root->right); // visit the right child last
    }
//////////////

// the main program
    int main()
    {
        Node* root = nullptr; // start with an empty tree
        int vals[5] = {50,30,70,20,40}; // array of values to insert into the tree
        for (int v : vals) // loop through the aaray
            root = insert (root, v); // insert each number into the BST

        cout << "BST inorder sorted: "; //print
        inorder(root); cout << "\n"; //display number in sorted order

// lets search for two values
    cout<<"search 40: "
        <<(search(root, 40) ? "found" : "not found") << "\n"; // 40 shoul be found since it is on the list
    cout<<"search 29 : "
        <<(search(root, 29) ? "found" : "not found") << "\n"; // 29 should not be found

    }
























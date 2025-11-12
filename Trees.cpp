/*The purpose of this code is to show how Binary Search Tree works.
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
        int key;
        Node* left;
        Node* right;
    };
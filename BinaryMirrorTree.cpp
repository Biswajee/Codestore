#include <bits/stdc++.h>
using namespace std;

//function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

/* Should convert tree to its mirror */
void mirror(Node* node) 
{
     if(node == NULL) return;
     else {
         mirror(node->left);
         mirror(node->right);
         
         Node* temp = node->left;
         node->left = node->right;
         node->right = temp;
     }
}
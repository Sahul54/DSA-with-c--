#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node* BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node* temp = new Node(x);
    // Left side create node
    cout<<"Enter the left child of "<<x<<" :";
    temp->left = BinaryTree();
    // Right side create Node
    cout<<"Enter the Right child of "<<x<<" :";
    temp->right = BinaryTree();
    return temp;
}

void PreOrder(Node* root){
    if(root == NULL)
    return;

    // 1. Print node
    cout<<root->data;
    // 2. Left side
    PreOrder(root->left);
    // 3. Right side
    PreOrder(root->right);
}

void InOrder(Node* root){
    if(root == NULL)
    return;

    // 1. Left side
    InOrder(root->left);
    // 2. Print node
    cout<<root->data;
    // 3. Right side
   InOrder(root->right);
}

void PostOrder(Node* root){
    if(root == NULL)
    return;

    // 1. Left side
    PostOrder(root->left);
    // 2. Right side
    PostOrder(root->right);
    // 3. Print node
    cout<<root->data;
    
}
int main(){

    // Tree creation code
    cout<<"Enter the root Node: ";
    Node* root;
    root = BinaryTree();

    // Pre Order Print
    cout<<"Pre Order: ";
    PreOrder(root);

    // In Order Print
    cout<<"\nIn Order: ";
    InOrder(root);

    // Podt Order Print
    cout<<"\nPost Order: ";
    PostOrder(root);

    return 0;

}
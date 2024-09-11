#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data; 
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val; 
        left, right = NULL;
    }
};

Node* createBinaryTree(){
    int data;
    cin>>data;

    if(data == -1) return NULL;

    // srep 1: Create new Node
    Node* root = new Node(data);

    if(root->data > data){
        // step2: Create left Node
        cout<<"Enter the left child of "<<data<<endl;
        root->left = createBinaryTree();
    }
    elae if(root->data < data){
        // step 3: Create right Node
        cout<<"Enter thr right child of "<<data<<endl;
        root->right = createBinaryTree();
    }
    return root;
}

bool searchNode(int val){
    if(!root) return;

    if()

}

Node* findMin(Node* )
int main(){
    cout<<"Enter the Root node: ";
    Node* root = createBinaryTree();
    cout<<root->data;


  return 0;
}
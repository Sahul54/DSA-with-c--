#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node (int val){
        this -> data = val;
        this -> data = NULL;
        this -> data = NULL;
    }
};

// its return the root node

Node* createTree(){
    cout<<"Enter the value"<<endl;
    int data;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    // 1. Step
    Node* root = new Node(data);
    // 2. Step
    Node* left = createTree();
    // 3. step
    Node* right = createTree();
    return root;
}


int main(){
   
   Node* root = createTree();
   cout<<root-> data<<endl;

  return 0;
}
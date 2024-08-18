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
    // step2: Create left Node
    cout<<"Enter the left child of "<<data<<endl;
    root->left = createBinaryTree();
    // step 3: Create right Node
    cout<<"Enter thr right child of "<<data<<endl;
    root->right = createBinaryTree();

    return root;
}
int main(){
    cout<<"Enter the Root node: ";
    Node* root = createBinaryTree();
    cout<<root->data;
  return 0;
}























// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node (int val){
//         this->data = val;
//         // this->data = NULL;
//         // this->data = NULL;
//         left = NULL,
//         right = NULL;
//     }
// };

// // its return the root node
// Node* createTree(){
//     int data;
//     cin>>data;

//     if(data == -1){
//         return NULL;
//     }

//     // 1. Step
//     Node* root = new Node(data);
//     // 2. Step
//     cout<<"Left child Value: ";
//     Node* left = createTree();
//     // 3. step
//     cout<<"Right child Value:";
//     Node* right = createTree();
//     return root;
// }


// int main(){
//    cout<<"Enter the Root value: "<<endl;
//    Node* root = createTree();
// //    cout<<root->data<<endl;

//   return 0;
// }
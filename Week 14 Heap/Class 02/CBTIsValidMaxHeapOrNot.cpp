#include<bits/stdc++.h>
using namespace std;


void storedInorder(Node* root, vector<int> &in){
        // base case
        if(root == NULL){
            return;
        }
        
        // LNR
        storedInorder(root->left, in);
        in.push_back(root->data);
        storedInorder(root->right, in);
    }
    
    void replaceWithPostorder(Node* root, vector<int> in, int &index){
        // base case
        if(root == NULL){
            return;
        }
        // LRN
        replaceWithPostorder(root->left, in, index);
        replaceWithPostorder(root->right, in, index);
        root->data = in[index];
        index++;
    }
    
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        // step 1: store in Inorder Traversal
        vector<int> inorder;
        storedInorder(root, inorder);
        
        // step2: replae the value into max heap
        int index = 0;
        replaceWithPostorder(root, inorder, index);
        // return root;
    }  
int main(){

return 0;
}
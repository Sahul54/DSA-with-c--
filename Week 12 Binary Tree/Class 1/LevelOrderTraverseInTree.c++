#include<bits/stdc++.h>
using namespace std;

class Node
{
  public: 
  int data;
  Node* left, *right;

  Node(int val){
    this->data = val;
    this->left = left;
    this->right = right;
  }
};

Node* createTree(){
  cout<<"Enter the value: "<<endl;
  int data;
  cin>>data;

  if(data == -1){
    return NULL;
  }

  Node* root = new Node(data);

  root->left = createTree();

  root->right = createTree();

}

void levelOrderTraversal(Node* root){
  queue<Node*>q;

  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* frontNode = q.front();
    q.pop();

    if(frontNode == NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }

    else{
      cout<<frontNode->data<<" ";

      if(frontNode->left != NULL){
        q.push(frontNode->left);
      }
      if(frontNode->right != NULL){
        q.push(frontNode->right);
      }
    }
  }
}
int main(){
  Node* root = createTree();
  levelOrderTraversal(root);
  return 0;
}
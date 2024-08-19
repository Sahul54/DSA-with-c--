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
int main(){
    int x;
    int first, second;
    cout<<"Enter root Element: ";
    cin>>x;

    queue<Node*> q;
    Node* root = new Node(x);
    q.push(root);

    // Build the Binary tree
    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        cout<<"Enter left value of "<<temp->data <<": ";
        cin>>first; 
        if(first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }

        cout<<"Enter right value of "<<temp->data <<": ";
        cin>>second;
        if(second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
  return 0;
}
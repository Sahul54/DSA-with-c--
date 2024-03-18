#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node* next;  //node create

 //constructor
 Node(){
  cout<<"def constructor"<<endl;
  this->next = NULL;
 }

 Node(int data){
  // cout<<"perm constructor"<<endl;
  this->data = data;
  this->next = NULL;
  
 }
};

void printLL(Node* head){
  // kabhi bhi hm orignal poiner ko nhi use kare ge, ek temp bana k use kre ge
  Node* temp = head;
  while (temp != NULL)
  {
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<endl;
}

int printLength(Node* head){
  Node* temp = head;
  int length = 0;
  while (temp != NULL)
  {
    // cout<<length<<endl;
    cout<<length<<"->"<<temp->data<<endl;
    temp = temp->next;
    // head = head->next;// ye use kre gye prev record ka pata nhi kr paye gye,  so its is no good pratice
    
    length++;
  }
  return length;
}
int main()
{
  // cration of node
  //  Node a; //static object

   Node* first = new Node(1) ; //dynamic object
   Node* second = new Node(2);
   Node* third = new Node(3);
   Node* fourth = new Node(4);

   first-> next = second;
   second-> next = third;
   third-> next= fourth;
   //LL create ho chuka hai

   Node* head = first;
   cout<<"Print LL: ";
   printLL(head);
   cout<<endl<<"Length is: "<<printLength(head);
   return 0;
}
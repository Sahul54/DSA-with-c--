#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* prev;
  Node* next;

  Node(){
    this-> prev = NULL;
    this-> next = NULL;
  }

  Node(int data){
    this-> data = data;
    this-> prev = NULL;
    this-> next =NULL;
  }
};

void print(Node* &head){
  Node* temp = head;

  while ( temp != NULL)
  {
    cout<<temp->data << "->";
    temp = temp ->next;
  }
  
}

int length(Node* &head){
  Node* temp = head;
  int len = 0;

   while (temp != NULL)
   {
    len++;
    temp = temp-> next;
   }
   return len;
   
}

void insertAtHead(Node* &head, Node* & tail, int data){
  // LL is empty

  if(head == NULL){
    Node* newNode = new Node(data);
    head= newNode;
    tail = newNode;
  }

  else{
    Node* newNode = new Node(data);
    newNode-> next = head;
    head-> prev = newNode;
    head = newNode; 
  }
}

void insertAtTail(Node* &head, Node* &tail, int data){
  // LL is empty

  if(head == NULL){
    Node* newNode = new Node(data);
    head= newNode;
    tail = newNode;
  }

  else{
    Node* newNode = new Node(data);
    tail-> next = newNode;
    newNode->prev = tail;
    // tail = newNode;
    tail = tail->next;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
   // LL is empty
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }

  else{
    int len = length(head);
    if(position == 1){
      insertAtHead(head, tail, data);
    }

    else if(position == len + 1){
      insertAtTail(head, tail, data);
    }

    else{
      //
      //
      Node* newNode = new Node(data);
      //
      Node* prevNode = NULL;
      Node* currNode = head;

      while (position != 1)
      {
        position--;
        prevNode = currNode;
        currNode = currNode-> next;
      }

      //
      prevNode-> next = newNode;
      newNode-> prev = prevNode;
      newNode-> next = currNode;
      currNode-> prev = newNode; 
    }
  }
}

int main()
{
  Node* head = NULL;
  Node* tail = NULL;
  insertAtHead(head, tail, 50);
  insertAtHead(head, tail, 40);
  insertAtHead(head, tail, 30);
  insertAtHead(head, tail, 20);
  insertAtHead(head, tail, 10);
  // insertAtTail(head, tail, 100);
  // print(head);
  cout<<endl;

  insertAtPosition(head, tail, 1000, 2);
  print(head);
    return 0;
}

// this is doubaly ll

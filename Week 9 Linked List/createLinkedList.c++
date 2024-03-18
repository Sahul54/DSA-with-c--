#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node()
  {
    // cout << "Deafult constructor" << endl;
    this->next = NULL;
  }

  Node(int data)
  {
    // cout << "Parametrized constructor" << endl;
    this->data = data;
    this->next = NULL;
  }
};

void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout<<temp->data << "-> ";
    temp = temp->next;
  }
  cout<<endl;
}

int printLength(Node* head)
{
  Node *temp = head;
  int length = 0;

  while (temp != NULL)
  {
    length++;
    temp = temp->next;
  }
  return length;
}

// Insert at head node
void insertAtheadNode(Node* &head, Node* tail, int data){
  if(head == NULL){
    //empty
    //1.create new node
    Node* newNode = new Node(data);
    //2. update
    head = newNode;
    tail = newNode;
  }
  else{
  // 1. Create a new node
  Node* newNode = new Node(data);

  // 2. Attach new node to head node
  newNode -> next = head;

  // 3. update head
  head = newNode;
  }
  
}

// Insert at tail node
void insertAtTailNode(Node* &head, Node* &tail, int data){
  if(head == NULL){
    //empty
    //1.create new node
    Node* newNode = new Node(data);
    //2. update
    head = newNode;
    tail = newNode;
  }
  else{
  // 1. Create a new node
  Node* newNode = new Node(data);

  // 2. Attach new node to head node
  tail -> next = newNode;

  // 3. update head
  tail = newNode;
  }
  
}


int main()
{
  //  clean code
  Node* head = NULL;
  Node* tail = NULL;

  insertAtheadNode(head, tail, 100);
  insertAtheadNode(head, tail, 200);
  insertAtheadNode(head, tail, 300);
  insertAtheadNode(head, tail, 400);
  // insertAtTailNode(head, tail, 500);
  //  insertAtTailNode(head, tail, 100);
  cout<<"print linked list: "<<endl;
  print(head);
   


  // // creation of Node
  // // Node a;

  // // Dymanic creation of node
  
  // Node *first = new Node(1);
  // Node *second = new Node(2);
  // Node *third = new Node(3);
  // Node *fourth = new Node(4);
  // Node *tail = fourth;

  // first->next = second; 
  // second->next = third;
  // third->next = fourth;
  // // linked list create ho chuka hai

  // Node* head = first;
  // cout<<"print linked list: "<<endl;
  // print(head);
  // // cout<<endl<<"Length is: "<<printLength(head);
  
  // insertAtheadNode(head, tail, 100);
  // print(head);

  // insertATailNode(head, tail, 100);
  // print(head);
  return 0;
}
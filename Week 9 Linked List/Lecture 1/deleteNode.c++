#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;

        Node() {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
        }

        ~Node(){
          cout<<"Destructor called : " <<this->data<<endl;
        }


};

//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head, Node* &tail, int data) {
        //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
//I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }

}
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        int len = findLength(head);
        
        if(position == 1) {
                insertAtHead(head, tail , data);
                return;
        }
        else if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        else {
            Node* newNode = new Node(data);
            
            Node* prev = NULL;
            Node* curr = head;
            while(position != 1) {
                position--;
                prev = curr;
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            
        }
        
}

void deleteNode(Node* &head, Node* &tail, int position){
  // empty list
  if(head == NULL){
    cout<<"can't delete node, bcz LL is empty"<<endl;
    return;
  }

  if(head == tail){
    // single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }

  int length = findLength(head);

  if(position == 1){
    // delete head node
    Node* temp = head;
    head = head->next;
    temp -> next = NULL;
    delete temp;

  }

  else if (position == length)
  {
    // delete tail node
    Node* prev = head;
    //find prev
    while (prev-> next != tail)
    {
      prev = prev->next;
    }
    
    //prev node ka link null kro
    prev -> next = NULL;

    //node delete kro
    delete tail;

    //update tail
    tail = prev;
    
  }

  else{
    //middle node delete kr doo
    
    //1. set prev/ curr pointers
    Node* prev = NULL;
    Node* curr = head;
    while (position != 1){
      position--;
      prev = curr;
      curr = curr->next;
    }

    //2. prev -> next me curr ka next node add kr doo
    prev -> next = curr-> next;

  //3. node isolate kr do
  curr-> next == NULL;
  
  //4. delete curr
  delete curr;
    

  }
  
}


int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAtHead(head, tail, 10);
        insertAtHead(head, tail, 20);
        insertAtHead(head, tail, 30);
        insertAtHead(head, tail, 40);
        insertAtHead(head, tail, 50);

        print(head);
        cout << endl;

        // deleteNode(head, tail, 1);
        // print(head);

        // deleteNode(head, tail, 5);
        // print(head);

        deleteNode(head, tail, 3);
        print(head);



        return 0;
}

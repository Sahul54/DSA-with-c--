#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        // check full
        // if ((rear + 1) % size == front) {  // why dont use ==> % exprerssion is expensive
        if (front == 0 && rear == size-1) {
            cout << "Queue overflow" << endl;
            return;
        } else if (front == -1 && rear == -1) {
            // Empty case
            front = rear = 0;
            arr[rear] = val;
        } else {
            // normal case
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    void pop() {
        // underflow
        if (front == -1 && rear == -1) {
            cout << "Queue underflow" << endl;
            return;
        } else if (front == rear) {
            // only one element case
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            // normal case
            arr[front] = -1;
            front = (front + 1) % size;
        }
    }

    bool empty() {
        return front == -1;
    }

    int getSize() {
        if (front == -1 && rear == -1) {
            return 0;
        } else if (rear >= front) {
            return (rear - front + 1);
        } else {
            return (size - front + rear + 1);
        }
    }

    int getFront() {
        if (front == -1) {
            cout << "No element in queue" << endl;
            return -1;
        } else {
            return arr[front];
        }
    }

    void print() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Print Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    // creation
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.print();
    q.pop();
    q.print();
    q.push(50);
    q.push(60);  // should wrap around
    q.print();
    // int size = q.getSize();
    // cout<<size;
    return 0;
}

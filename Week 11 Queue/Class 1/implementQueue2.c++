#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    MyQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        // check full
        if (rear == size - 1) {
            cout << "Queue overflow" << endl;
            return;
        } else if (front == -1 && rear == -1) {
            // Empty case
            front++;
            rear++;
            arr[rear] = val;
        } else {
            // normal case
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        // underflow
        if (front == -1 && rear == -1) {
            cout << "Queue underflow" << endl;
            return;
        } else if (front == rear) {
            // empty case
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    bool empty() {
        if (front == -1 && rear == -1) {
            return true;
        } else {
            return false;
        }
    }

    int getSize() {
        if (front == -1 && rear == -1) {
            return 0;
        } else {
            return (rear - front + 1);
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
        cout << "Print Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // creation
    MyQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.print();
    q.pop();
    q.pop();
    q.print();
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Deque {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == (rear + 1) % size);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void pushFront(int val) {
        if (isFull()) {
            cout << "Deque overflow from front" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + size) % size;
        }
        arr[front] = val;
    }

    void pushRear(int val) {
        if (isFull()) {
            cout << "Deque overflow from rear" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }
        arr[rear] = val;
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Deque underflow from front" << endl;
            return;
        }
        arr[front] = -1;
        if (front == rear) {  // only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    void popRear() {
        if (isEmpty()) {
            cout << "Deque underflow from rear" << endl;
            return;
        }
        arr[rear] = -1;
        if (front == rear) {  // only one element
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    void print() {
        if (isEmpty()) {
            cout << "Deque is empty" << endl;
            return;
        }
        cout << "Print Deque: ";
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
    Deque dq(5);

    // test push from rear
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.print();

    // test push from front
    dq.pushFront(5);
    dq.print();

    // test pop from front
    dq.popFront();
    dq.print();

    // test pop from rear
    dq.popRear();
    dq.print();

    // more push and pop
    dq.pushRear(40);
    dq.pushFront(2);
    dq.print();

    return 0;
}

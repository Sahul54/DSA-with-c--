#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    // By default constructor
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) {
            throw runtime_error("Queue is empty");
        }

        int popValue = s2.top();
        s2.pop();
        return popValue;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) {
            throw runtime_error("Queue is empty");
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue queue;
    queue.push(1);
    queue.push(2);
    cout << "Peek: " << queue.peek() << endl; // Should print 1
    cout << "Pop: " << queue.pop() << endl;   // Should print 1
    cout << "Peek: " << queue.peek() << endl; // Should print 2
    cout << "Pop: " << queue.pop() << endl;   // Should print 2
    cout << "Is empty: " << queue.empty() << endl; // Should print 1 (true)

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Custom comparator for the priority queue
struct compareTask {
    bool operator()(const pair<int, int> &task1, const pair<int, int> &task2) {
        return task1.second < task2.second; 
    }
};

int main() {
    int n;
    cin >> n;
    
    // Priority queue with custom comparator
    priority_queue<pair<int, int>, vector<pair<int, int>>, compareTask> pq;
    
    for (int i = 0; i < n; i++) {
        int task_id, priority;
        cin >> task_id >> priority;
        pq.push(make_pair(task_id, priority));
    }
    
    while (!pq.empty()) {
        cout << pq.top().first << endl; 
        pq.pop();
    }
    
    return 0;
}
 
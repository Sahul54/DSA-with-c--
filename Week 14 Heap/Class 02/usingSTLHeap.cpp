#include<bits/stdc++.h>
using namespace std;

int main(){

    // Max Heap
    // priority_queue<int> pq;
    // // Insertion
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);

    // cout<<"Top element of heap: "<<pq.top();
    // pq.pop();
    // cout<<"Top element of heap: "<<pq.top();
    
    // Min Heap
    priority_queue<int, vector<int>, greater<int>>pq;
    // Insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    cout<<"Top element of heap: "<<pq.top();
    pq.pop();
    cout<<"Top element of heap: "<<pq.top();

return 0;
}
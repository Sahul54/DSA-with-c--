#include<bits/stdc++.h>
using namespace std;

void reverseKQueue(queue<int> &q, int k){
    stack<int> st;
    int n = q.size();

    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }

    // for(int i=0; i<k; i++){
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }
}
int main(){
queue<int> q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);

int k = 3;
reverseKQueue(q, k);

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}
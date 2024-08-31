#include<bits/stdc++.h>
using namespace std;

void reverseQueque(queue<int> &q){
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void byRecursionReverse(queue<int> &q){
    // base case
    if(q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();

    byRecursionReverse(q);

    q.push(temp);
}
int main(){
queue<int> q;

q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);

// reverseQueque(q);

byRecursionReverse(q);

while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}

return 0;
}
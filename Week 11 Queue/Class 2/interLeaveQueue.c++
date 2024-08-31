#include<bits/stdc++.h>
using namespace std;

void interLeave(queue<int> &q1, int n){
    // Break q1ueue into two part
    queue<int> q2;
    for(int i =0; i<n/2; i++){
        q2.push(q1.front());
        q1.pop();
    }

    // q2 -> 10, 20, 30
    // q1 -> 40, 50, 60

    while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();

        q1.push(q1.front());
        q1.pop();
    }

}
int main(){
queue<int> q1;

q1.push(10);
q1.push(20);
q1.push(30);
q1.push(40);
q1.push(50);
q1.push(60);

int n = q1.size();

interLeave(q1, n);

while (!q1.empty())
{
    cout<<q1.front()<<" ";
    q1.pop(); 
}

return 0;
}
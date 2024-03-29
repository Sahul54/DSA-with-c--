#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    queue<int> q;

    // insertion
    q.push(10);
    q.push(5);
    q.push(1);
    
    //show
    cout<<"Fornt Element: "<<q.front()<<endl;
    cout<<"Last Element: "<<q.back()<<endl;

    //remove
    q.pop();
    cout<<"Remove Element: "<<q.back()<<endl; // pop ho gya h but show nhi kr raha hai

    cout<<"size :" <<q.size()<<endl;
    q.pop();
    q.pop();

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

  return 0;
}
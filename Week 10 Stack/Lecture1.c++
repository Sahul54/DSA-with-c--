#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    // size
    cout<<"size of stack: "<<st.size()<<endl;

    // top 
    cout<<st.top()<<endl;

    // remove
    st.pop();
    st.pop();
    st.pop();

    // empty
    if (st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
  return 0;
}
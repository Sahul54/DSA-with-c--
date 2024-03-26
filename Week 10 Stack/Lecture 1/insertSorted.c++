#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int &element){
    //base case
    if(st.empty()){
        st.push(element);
        return;
    }

    //1 case solve kro
    int temp = st.top();
    st.pop();

    //Recursion
    insertAtBottom(st, element);

    //Backtracking
    st.push(temp);

}

void reverseStack(stack<int> &st){
        //base case
        if (st.empty())
        {
            return;
        }

        //1 case solve kro
        int temp = st.top();
        st.pop();

        //recursion ko dedo
        reverseStack(st);

        // backtracking
        insertAtBottom(st,temp);
        
    }

    void insertSorted(stack<int> &st, int element) {
  //base case
  if(st.empty() || element > st.top()) {
    st.push(element);
    return;
  }

  //1 case sambhalna h
  int temp = st.top();
  st.pop();
  //recursion sambhalega
  insertSorted(st,element);
  //backtrack
  st.push(temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    insertSorted(st, 23);
    cout<<"with reverse: ";
    while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
    
  return 0;
}
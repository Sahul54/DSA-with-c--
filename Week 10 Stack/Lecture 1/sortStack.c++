#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &st, int &element) {
  //base case
  if(st.empty()) {
    st.push(element);
    return;
  }

  //1 case main solve karunga
  int temp = st.top();
  st.pop();

  //baaaki recursion
  insertAtBottom(st, element);

  //backTrack
  st.push(temp);
}

void reverseStack(stack<int> &st) {
  //base case
  if(st.empty()) {
    return;
  }
  //1 case main solve krega
  int temp = st.top();
  st.pop();
  //refcursion
  reverseStack(st);
  //backtrack
  insertAtBottom(st,temp);
}

void insertSorted(stack<int> &st, int &element) {
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

void sortedStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }
    
    //1 case solve kro
    int temp = st.top();
    st.pop();

    //recursion
    sortedStack(st);

    //backtracking
    insertSorted(st, temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(4);
    st.push(30);
    st.push(40);

    // insertSorted(st, 23);

    sortedStack(st);

    cout<<" sorted stack: ";
    while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
    
  return 0;
}
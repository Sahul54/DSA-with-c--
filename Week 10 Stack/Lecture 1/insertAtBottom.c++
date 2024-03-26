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
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 200;

    insertAtBottom(st, element);

    while(!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
    
  return 0;
}
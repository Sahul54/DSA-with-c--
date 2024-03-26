#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st, int &pos, int &ans) {
  //base case
  if(pos == 1) {
    //ans =  st.top();
    cout << "Deleting "<< st.top() << endl;
    st.pop();
    return;
  }

    //1 case slove kro
    pos--;
    int temp = st.top();
    st.pop();

    //recursive call
    solve(st, pos, ans);

    //backtracking
    st.push(temp);
}

int middle(stack<int> &st){
    int size = st.size();
    int pos = 0;
    //stack is empty
    if(st.empty()){
        cout<<"stack is empty"<<endl;
        return -1;
    }

    // stack is not empty
    else{
        if(size & 1){
            pos = size/2+1;
        }
        else{
            pos= size/2;
        }
    }
    int ans = -1;
    solve(st,pos,ans);
    return ans;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(20);
    cout<<"middle element is : "<<middle(st)<<endl;
  return 0;
}
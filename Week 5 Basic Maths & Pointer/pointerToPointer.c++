#include<bits/stdc++.h>
using namespace std;


int solve(int * &ptr){
ptr = ptr+1;
}
int main()
{
  // int a = 4;
  // int* ptr = &a;
  // cout<<*ptr<<endl;
  // int **ptr2 = &ptr;
  // cout<<**ptr2<<endl;
  // int***ptr3 = &ptr2;
  // cout<<***ptr3<<endl;


  // int p = 4;
  // int * q = &p;
  // int ** q1 = &p;

  int a =6;
  int * ptr = &a;
  cout<<ptr<<endl;
  cout<<&ptr<<endl;
  cout<<*ptr<<endl;

  solve(ptr);
  cout<<ptr<<endl;
  cout<<&ptr<<endl;
  cout<<*ptr<<endl;
  

    return 0;
}
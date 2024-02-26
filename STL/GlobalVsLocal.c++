#include<bits/stdc++.h>
using namespace std;

int x = 9;

void fun(){
  int x = 40;
  cout<<x<<endl;
  cout<<::x<<endl;
  
}
int main()
{   cout<< x<<endl;  // global x
    int x = 4; 
    cout<<x<<endl;  // local x
    cout<<::x <<endl; //global acess to ::varible name eg:- ::x
    {
      int x = 10;
      cout<<x<<endl;
      cout<<::x<<endl;
    }
    fun();
    return 0;
}
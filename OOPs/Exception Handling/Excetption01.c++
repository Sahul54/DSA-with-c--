#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    try{
        if(b==0){
            throw "Divisible by 0 is not possible";
        }
        int c = a/b;
        cout<<c<<endl;
    }
    catch(const char *e){
        cout<<"Exception Occured: "<<e<<endl;
    }
  return 0;
}
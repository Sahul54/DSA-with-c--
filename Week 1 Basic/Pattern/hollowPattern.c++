#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // * * * *
    // *     *
    // *     *
    // * * * *
    int n;
    cout<<"Enter the no row and col: ";
    cin>>n;
    for(int row = 0; row<n; row++){
        for(int col= 0; col<n; col++){
            if(row == 0 ||col == 0 || row == n-1 ||col == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
  return 0;
}
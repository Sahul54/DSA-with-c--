#include<bits/stdc++.h>
using namespace std;
int main(){
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    int n;
    cout<<"enter the row: ";
    cin>>n;

//  for(int i =0; i<n; i++){
//     for(int j = 0; j<i+1; j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }

//   * * * * *
//   * * * * 
//   * * *
//   * 

// for(int i =0; i<n; i++){
//     for(int j = 0; j<n-i; j++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }



// print Pattern  Half Butterfly
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

for(int i =0; i<n; i++){
  for(int j = 0; j<i+1; j++){
    cout<<"* ";
  }
  cout<<endl;
}

for(int i =0; i<n-1; i++){
  for(int j = 0; j<n-1-i; j++){
    cout<<"* ";
  }
  cout<<endl;
}

// print Pattern Full Butterfly


  return 0;
}
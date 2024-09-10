#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n =6;
    // for(int i=0; i<=n; i++){
    //     for(int j =0; j<(n-i); j++){
    //         cout<<" ";
    //     }
    //     if(i==1 || i ==n){
    //         for(int j =1; j<=i; j++){
    //             cout<<"# ";
    //         }
    //     }
    //     else{
    //         cout<<"# ";
    //         for(int j =1; j<2*i-3;j++){
    //             cout<<" ";
    //         }
    //         cout<<"#";
    //     }
    //     cout<<endl;
    // }

    // int i =n; int j = n;
    //  for( i = n; i>=1; i--){
    //     for( j = n; j>=1; j--){
    //         cout<<"# ";
    //         cout<<endl;
    //         if(j==n-1 || j==j-n){
    //                 cout<<" #";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
        
    //     cout<<endl;
    //  }


    int n = 5;
    // int j =0;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == 0 || i == 0 || j = (i*2)+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<"he";

return 0;
}
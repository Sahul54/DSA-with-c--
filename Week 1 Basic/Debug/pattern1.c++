/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;
/*
Pattern
1
23
345
4567
*/

int main(){
    int n;
    cout<<"Enter the row: ";
    cin>>n;
    // int i=1;
    // while(i<=n){
    //   int j = i,count = 1;
    //     while(count<=i){
    //         cout<<j;
    //         j = j + 1;
    //         count = count + 1;
    //     }
    //     cout<<"\n";
    //     i = i + 1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1;j++){
            cout<<j+i+1;
        }
        cout<<endl;
    }
   

}
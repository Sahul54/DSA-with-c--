#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the no: ";
cin>>n;

int binaryNum[32];
int i =0;
while (n>0){
    binaryNum[i] = n%2;
    n =n/2;
    i++;
}
for(int i=0; i<n; i++){
    cout<<binaryNum[i]<<" ";
}

return 0;
}
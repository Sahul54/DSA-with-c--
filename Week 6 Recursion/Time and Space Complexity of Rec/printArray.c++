#include<bits/stdc++.h>
using namespace std;
void printArray(int a[], int n){
  if(n==0) return;

  cout<<*a<<" ";
  printArray((a+2),(n-1));
}
int main()
{
  int a[] = {1,2,3,4,5,6,7,8};
  int n = 5;
  printArray(a, n);
    return 0;
}
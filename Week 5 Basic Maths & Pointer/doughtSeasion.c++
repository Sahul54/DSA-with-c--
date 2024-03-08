#include<bits/stdc++.h>
using namespace std;


void swap(int *x, int *y){
  int temp;
  temp = *x;
   *x = *y;
   *y = temp;
  cout<<*x<<*y<<endl;
}
int main()
{ 
  // int * ptr = null;
  // int * ptr = 0;  
  // int * ptr = nullptr;
  //  int a = 0;

  //  if (ptr != a)
  //  {
  //   cout<<*ptr;
  //  }

  // int b[4] = {1,2,3,4};
  // cout<<b;
  // b = b+1;
  // cout<<b;
   
  // cout<<*ptr;

  int a = 1;
  int b = 2;
  int c = 3;

   int *arr[] = {&a, &b, &c};
  //  cout<<*arr[0]<<endl;
  //  cout<<*arr[1]<<endl;
  //  cout<<*arr[2]<<endl;

  // int* ptrArr[3] = {0};
  // ptrArr[0] = &a;
  // ptrArr[1] = &b;
  // ptrArr[2] = &c;
  // cout<<ptrArr[0]<<endl;
  // cout<<ptrArr[1]<<endl;
  // cout<<ptrArr[2]<<endl;
  
  // int a = 10;
  // int *ptr = &a;
  // cout<<*ptr + 2**ptr -5**ptr<<endl;


  // ---------Swap by Pointer-----------

  int x = 3;
  int y =2;

  swap(&x, &y);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
  // int a = 4;
  // cout<<a<<endl;
  // int* ptr = &a;
  // cout<<&a<<endl;   // address tk pahuchate hai
  // cout <<ptr<<endl; // address tk pahuchate hai
  // cout<<*ptr<<endl; // address mai kya ha ye pata chalta hai

  // cout<<"Address of ptr: "<<&ptr<<endl; // address of ptr

  // cout<<"size Of Pointer: "<<sizeof(ptr) <<endl;  // depend upon compiler

  // // int *ptr1;
  // // cout<<"value of ptr1: "<<*ptr1; // arbage value --> it is a bad pratice  --> inlligal access


  // int *ptr1 = nullptr;
  // cout<<"value of ptr1: "<<*ptr1;

  // int b = 10;
  // int* ptr2  = &b;
  // b=b+1;
  // cout<<"b: "<<b<<endl;
  // cout<<"ptr2 : "<<ptr2<<endl; 
  // ptr2 = ptr2+1;
  // cout<<"ptr2 + 1  : "<<ptr2<<endl;

  // int* ptr3 = &b;  // copy pointer
  // cout<<*ptr3<< endl;

  int q = 1;
  int *p = &q;
  cout<<&p <<endl;
  p = p+1;
  cout<<p<<endl;

  // int arr[2] = {1,2};
  // arr= arr+1; //error


  // 
  // char ch[40] = "Princess";
  // // cout <<"Address of ch(base): "&ch;
  // char *cptr = & ch;
  // cout<<"Print: "<<*cptr<<endl; // Pura String Print ho ga

  // if array of Pointer 

  // int arr[3] = {1,2,3};
  // int *ptr = arr;
  // cout<<"Print : " <<ptr <<endl;  // array ka base address Print hon gya

  char ch = 'a';
  char *cptr = &ch;
  cout<<cptr<<endl;


    return 0;
}
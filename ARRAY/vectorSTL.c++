#include<iostream>

using namespace std;

void fun(int arr[], int n){
  cout<<"array element are: ";
  for (int i = 0; i < n; i++)
  {
    cout<< arr[i]<<" ";
  }
  
}

int main(){
// int arr[5]= {1,2,3,4,5};  // static memory alloction
// int n= 5;


// Dynamic memory alloction
int n;
cout<<"Size of array is : ";
cin>>n;
int *arr = new int[n];  // each element woukd be 0 or garbage
for (int i = 0; i < n; i++)
{
  int data;
  cin>>data;
  arr[i]=data;
}   // 0 index to n index;


// let me try to insert more items;  -> n=5 to new array 
for (int i = 0; i < n; i++)
{
  arr[n+1]= 80;
}
fun(arr, n);

}
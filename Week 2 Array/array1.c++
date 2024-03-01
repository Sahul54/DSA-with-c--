#include<iostream>

using namespace std;

// void printArray(int arr[], int size){
//   for (int i = 0; i < 5; i++)
//   {
//     cout<<arr[i] << " ";
//   }
  

// }

bool linearSearch(int arr[], int size, int target){

  for (int i = 0; i < size; i++)
  {
    if (arr[i]==target)
    {
      // found
      return true;

    }
    
  }
  return false;
  
}

int main(){
   int arr[5] = {1,2,3,4,5};
   int size = 5;
   int target = 10;

   bool ans = linearSearch(arr, size, target);

   if (ans == 1)
   {
    cout<<"Target found"<< endl;
   }
   else{
    cout<<"target is not found"<< endl;
   }
   
  // printArray(arr, size);



  // int a=4;
  // cout<<"size of a is: "<< sizeof(a)<<endl;
  // cout<<"Address of a" << &a <<endl;

  // int arr[12];

  // cout<<"size of arr is: "<< sizeof(arr)<<endl;

  // cout<<"Address of arr is:" << &arr<<endl;
  // cout<<"Address of arr is:" << arr<<endl; // base address printed

// Arrar initialisation---------------

// int arr[] = {0,1,2,3,4,5,6,7,8,9};
// cout<<"size of arr is :"<< sizeof(arr)<<endl << arr[1] <<endl; // arr --> base address;  arr[0] --> get value

// int arr1[7] = {1,2,3,4,4};
// // cout<<arr1[6];

// int n =6;

// for (int i = 0; i <= 6; i++)
// {
//    cout<< arr1[i] << endl;
// }

// taking input by user in array---------------

// int arr2[5];

// for (int i = 0; i < 5; i++)
// {
//   cout<< "enter the value is index" << i<< " ";
//   cin>> arr2[i];
//   cout<< endl;
// }

//  cout <<"Print the value of arr2 is" <<endl;

//  for (int i = 0; i < 5; i++)
//  {
//    cout<<arr2[i] << endl;
//  }


//  Linear Search in Array --------

//  i/p -> 2,4,6,8,10,12   target =10  --> o/p --> 10 found / not 


// int arr[] = {2,4,6,8,10,12};
// int target = 10;
// int n = 5;

// bool flag = 0;   // found = 1, not found = 0

// for (int i = 0; i < n; i++)
// {
//   if(arr[i]==target){
//     // found
//     flag = 1;
//     break;
     
//   }

// }


// if(flag ==1){
//   cout<<"Target found";
// }
// else{
//   cout<<"Target is not found";
// }

}
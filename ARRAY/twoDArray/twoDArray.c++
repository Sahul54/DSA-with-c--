#include<iostream>

using namespace std;

void printTwoDArray(int arr[2][3], int row, int col){
  cout<<"PrintArray is: " <<endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      // cout<<arr[i][j]<<" ";  
      cout<<arr[j][i]<<" "; // col print
    }
    cout<<endl;
  }
  
}
int main (){
  int arr[2][3];  //={{1,2,3},{4,5,6}};
  int row= 2;
  int col = 3; 

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout<<"Enter row index "<< i << " col index " << j << endl;
      cin>>arr[i][j];
    }
    
  }
  

  printTwoDArray(arr, row, col);
}
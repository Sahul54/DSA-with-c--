#include<iostream>
using namespace std;

void printArray(int arr[][3], int row, int col){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout<< " " <<arr[i][j];
    }
    cout<<endl;
  }
  
}

void transformArray(int arr[][3], int row, int col){
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j <  col; j++)   //if lower trangle use then replace for (col->i)
    {
      swap(arr[i][j],arr[j][i]);
    }
    
  }
  
}
int main()
{   int arr[3][3] = {
                     {1,2,3},
                     {4,7,6},
                     {7,8,9}
                  };

  int row = 3;
  int col= 3;

  cout<<"printing before transforming" << endl;
  printArray(arr, row , col);

  cout<<" Doing transform"<<endl;
  transformArray(arr, row, col);

  cout<<"After transforming" <<endl;
  printArray(arr, row, col);
  
    return 0;
}
#include<iostream>
using namespace std;

void rowsum(int arr[][3], int row, int col){
  // int sum = 0;
  for (int i = 0; i < col; i++)  // col ->row (replace for row print)
  {
    int sum = 0;
    for (int j = 0; j < row; j++)  // row ->col (replace for row print)
    {
      // // digonal sum
      // if (i==j)
      // {
      //   sum = sum + arr[j][i];  
      // }
      sum = sum + arr[j][i];  //arr[i][j] (replace it) 
    }
   
    cout<<"sum of "<<i<< " col is: "<< sum<< endl;
  }
  //  cout<<"Digonal sum is: "<< sum<< endl; // dignol sum
  
}
int main()
{    int arr[3][3] = {
                     {1,2,3},
                     {4,5,6},
                     {7,8,9}
                  };

  int row = 3;
  int col= 3;

  rowsum(arr, row, col);
    return 0;
}
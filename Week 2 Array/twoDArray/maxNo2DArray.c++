#include<iostream>
#include<limits.h>

using namespace std;

int findMinNO(int arr[][3],int row, int col){

int maxAns = INT_MIN;
for (int i = 0; i < row; i++)
{
  for (int j = 0; j< col; j++)
  {
    if (arr[i][j]>maxAns)
    {
      maxAns = arr[i][j];
      
    }
    
  }

}
  return maxAns;

}
int main(){
  int arr[3][3] = {
                     {1,2,3},
                     {4,78,6},
                     {7,8,9}
                  };

  int row = 3;
  int col= 3;

   cout<<"max no is: " << findMinNO(arr,row,col);
}               
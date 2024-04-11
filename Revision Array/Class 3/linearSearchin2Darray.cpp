#include<bits/stdc++.h>
using namespace std;

bool findTarget(int arr[3][3], int row, int col, int target){
    // bool flag = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {  
                // cout<<arr[i][j];
                return true;
            }
        }
        
    }
    return false;
}

// void findmin
int main(){
  int arr[3][3] = {
                  {1,2,3},
                  {4,5,6},
                  {7,8,9}
                };
  int row = 3;
  int col = 3;
  int target = 27;

  findTarget(arr, row, col, target);
  cout<<findTarget;
  if (findTarget){
    cout<<"target is found"<<endl;
  }else{
    cout<<"target is not found"<<endl;
  }
  
  return 0;
}
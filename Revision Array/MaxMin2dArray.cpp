#include<iostream>
using namespace std;

int findMax(int arr[3][3], int row, int col){
    int max = INT8_MIN;

    for(int i= 0; i <row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]> max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

void sumRow(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++){
     int sum = 0;
     for(int j = 0; j<col; j++){
        sum +=arr[i][j];
     }
     cout<<sum<<" ";
    }
    
}

void sumCol(int arr[][3], int row, int col){
    for (int i = 0; i < col; i++){
     int sum = 0;
     for(int j = 0; j<row; j++){
        sum +=arr[j][i];
     }
     cout<<sum<<" ";
    }
    
}

int findMin(int arr[][3], int row, int col){
    int min = INT16_MAX;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    return min;
}


void transposeArray(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
         swap(arr[i][j],arr[j][i]);
        }
    } 
    
}


int main(){
  int arr[3][3] = {
                     {1,2,3},
                     {4,5,6},
                     {7,8,9}
                  };

  int row = 3;
  int col= 3;
  
//   int max = findMax(arr, row, col);
//   cout<<"Max is 2D array"<<max<<endl;

//   int min = findMin(arr, row, col);
//   cout<<"Min is 2D array" <<min<<endl;

//   transposeArray(arr, row, col);

sumRow(arr, row, col);
sumCol(arr, row, col);

//   cout<<" target is : "<<findTarget(arr, row, col, target);



}               
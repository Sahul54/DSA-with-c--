#include<bits/stdc++.h>
using namespace std;

void countZeroOnes(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    cout<<"zero :"<<zeroCount <<" " <<"one :"<<oneCount;
    
}
int main(){
    int arr[] = {1, 1, 1, 0, 1, 0, 0, 1 ,1 ,1 ,0};
    int size = sizeof(arr)/4;

    countZeroOnes(arr, size);

  return 0;
}
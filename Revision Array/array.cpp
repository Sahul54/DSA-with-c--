#include<bits/stdc++.h>
using namespace std;

void linerSearch(int a[], int target, int size, int flag){
    for (int i = 0; i < size; i++)
    {
       if(a[i] == target){
        flag = 1;
        break;
       }
    }

     if(flag == 1){
        cout<<"Element is found";
       }
       else{
        cout<<"Element is not found";
       }
}
int main(){
    int a[5] = {1,2,3,4,5};
    int target = 3;
    int size = 5;
    int flag;

    linerSearch(a, target, size, flag);



    // for (int i = 0; i < size; i++)
    // {
    //    if(a[i] == target){
    //     flag = 1;
    //     break;
    //    }
    // }

    //  if(flag == 1){
    //     cout<<"Element is found";
    //    }
    //    else{
    //     cout<<"Element is not found";
    //    }
    
    // cout<<&a;
    // cout<<sizeof(a);  
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

void brutForce(int arr[], int n, int target){
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i]+arr[j] == target){
                cout<<"Target is find";
                return;
            }
        }
    }
    cout<<"Taget is not find";
    
}

// Two Pointer Approch
void twoPointerApproch(int arr[], int n, int target){
    int s =0;
    int e = n-1;

    // sort(arr.begin(), arr.end()); Its use the vector not in array
    sort(arr, arr + n);

    while(s<e){
        int currSum = arr[s] + arr[e];
        if(currSum == target){
            cout<<"Target is found";
            return;
        }
        else if(currSum > target){
            e--;
        }
        else{
            s++;
        }
    }
    cout<<"Target is not found";
}

int main(){
int arr[] = {1, 4, 45, 6, 10, 8};
int n = 6;
int target = 116;

// brutForce(arr, n, target);
twoPointerApproch(arr, n, target);
return 0;
}
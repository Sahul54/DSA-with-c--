#include<bits/stdc++.h>
using namespace std;

int getKSmallestElement(int arr[], int n, int k){
    priority_queue<int> pq;
    // first k element ko process kro
    for(int i =0; i<k; i++){
        int element = arr[i];
        pq.push(element);
    }

    // Remaning element ko tabhi insert kro jb oo root se chhota ho
    for(int i = k; i<n; i++){
        int element = arr[i];
        if(element > pq.top()){
            pq.pop();
            pq.push(element);
        }
    }
    int ans = pq.top();
    return ans;
}
int main(){
    int arr[] = {3,5,4,6,8,7,9};
    int n = 7;
    int k = 3;
    cout<<"4th smallest no: "<<getKSmallestElement(arr, n, k);
return 0;
}
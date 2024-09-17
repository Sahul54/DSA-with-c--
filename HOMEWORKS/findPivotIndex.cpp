#include<bits/stdc++.h>
using namespace std;

void bruteForce(vector<int>& arr, int n){
    for(int i = 0; i < n; i++){
        int lSum = 0;
        int rSum = 0;

        // Calculate left sum
        for(int j = 0; j < i; j++){
            lSum += arr[j];
        }

        // Calculate right sum
        for(int j = i + 1; j < n; j++){
            rSum += arr[j];
        }

        // Check if left sum equals right sum
        if(lSum == rSum) {
            cout << "Pivot Index: " << i << endl;
            return;  // Once found, we can exit the function
        }
    }

    // If no pivot index is found, print this message
    cout << "No Pivot Index Found" << endl;
}

void optimal(vector<int>& arr, int n){
    vector<int> lSum(n, 0);  // Create a vector for left sum
    vector<int> rSum(n, 0);  // Create a vector for right sum
    
    // Calculate left sum for each index
    for(int i = 1; i < n; i++){
        lSum[i] = lSum[i-1] + arr[i-1]; 
    }

    // Calculate right sum for each index
    for(int i = n-2; i >= 0; i--){
        rSum[i] = rSum[i+1] + arr[i+1];
    }

    // Check if any index is the pivot
    for(int i = 0; i < n; i++){
        if(lSum[i] == rSum[i]) {
            cout << "Pivot Index: " << i << endl;
            return;  // Exit once a pivot is found
        }
    }

    // If no pivot is found
    cout << "No Pivot Index Found" << endl;
}

int main(){
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    int n = arr.size();

    bruteForce(arr, n);
    // Call the optimal approach
    // optimal(arr, n);

    return 0;
}

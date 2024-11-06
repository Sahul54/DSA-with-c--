#include<bits/stdc++.h>
using namespace std;

int findFib(int n){
    // base case
    if(n==0 || n==1) return n;

    // recuresion
    int ans = findFib(n-1) + findFib(n-2);
    return ans;

}

//  Top Down Approch/ Memorization approch
int solveUsingMem(int n, vector<int> &dp){
        // Base case
        if(n==0 || n==1){
            dp[n] = n;
            return dp[n];
        }
    
        // step 3: if ans exixt then use it
        if(dp[n] != -1){
            return dp[n];
        }

        // step 2: store and return ans
        dp[n] = solveUsingMem(n-1, dp) + solveUsingMem(n-2, dp);
        return dp[n];
    }


int main(){
    int n;
    cout<<"Enter the Fib No: ";
    cin>>n;

    //Step 1: create  DP vector
    vector<int> dp(n+1, -1);

    int ans = solveUsingMem(n, dp);
    cout<<ans<<endl;


    // int finalAns = findFib(n);
    // cout<<finalAns<<endl;
return 0;
}
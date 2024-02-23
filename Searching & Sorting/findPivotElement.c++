#include<bits/stdc++.h>
using namespace std;

  //  find pivot index in rotte array
int searchIndex(vector<int>& nums) {
       
       int n = nums.size();
       int s = 0;
       int e = n-1;
       int mid = s + (e-s)/2;

       while(s<=e){
           if(s == e){
            //    single element
            return 0;
           }

           if(nums[mid] > nums[mid+1])
           return mid;

           else if(nums[mid] < nums[mid-1])
           return mid-1;
           
           else if(nums[s] > nums[mid])
           e = mid-1;
           else
           s = mid +1;

           mid = (s+e)/2;
       }
       return -1;
      
       }

int main()
{
  vector<int> v;
  v.push_back(12);
  v.push_back(14);
  v.push_back(16);
  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  v.push_back(8);
  v.push_back(10);
  
  int pivotIndex =  searchIndex(v);
  cout<< " Pivot index is :"<< pivotIndex<<endl;
     return 0;
}


// find error

class Solution {
public:
    int findPivotIndex(vector<int>& arr){
    int n = arr.size();
       int s = 0;
       int e = n-1;
       int mid = s + (e-s)/2;

       while(s<=e){
           if(s == e){
            //    single element
            return 0;
           }

           if(mid+1 < n && arr[mid] > arr[mid+1]){
           return mid;
           }
           else if(mid-1 >= 0 && arr[mid] < arr[mid-1])
           return mid-1;
           
           else if(arr[s] > arr[mid])
           e = mid-1;
           else
           s = mid +1;

           mid = s + (e-s)/2;
       }
       return -1;
       }
    

       int binarySearch(vector<int>& arr, int s, int e, int target){
           int mid = s+(e-s)/2;
           while(s<=e){
               if(arr[mid] == target)
               return mid;

               if(arr[mid] == target)
               s = mid+1;


               else
               e = mid-1;

               mid = (s+e)/2;

           }
           return -1;
       }
    int search(vector<int>& nums, int target) {
       
       int pivotIndex = findPivotIndex(nums);
       int n = nums.size();
       int ans = -1;
        //  search in A

        if(target >= nums[0] && target <= nums[pivotIndex]){
            ans = binarySearch(nums, 0, pivotIndex, target);
        }
        else{
            ans = binarySearch(nums, pivotIndex+1, n-1, target);
        }
        
        return ans;


    }
};
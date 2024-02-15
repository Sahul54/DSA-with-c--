#include<iostream>

using namespace std;

  //right ki disha me shift
void shiftArray(int arr[], int n) {
  //Step 1
  int temp = arr[n-1];

  //step2
  //shift -> arr[i] = arr[i-1]
  for(int i= n-1; i>=1; i--) {
    arr[i] = arr[i-1];
  }

  //step3 copy temp into 0th indecx
  arr[0] = temp;
}

int main() {


  int arr[] = {10,20,30,40,50,60};
  int n= 6;

  shiftArray(arr, n);

  //  Print left sift by 1 value
   for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}
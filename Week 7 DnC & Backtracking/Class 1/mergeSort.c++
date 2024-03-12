#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e) {

	int mid = (s+e)/2;

	int lenLeft = mid - s + 1;
	int lenRight = e - mid;

	//create left and right array
	int *left = new int[lenLeft];
	int *right = new int[lenRight];

	//copy values from original array to left array
	int k = s;
	//k -> starting index of left array values in original arrya
	for(int i=0; i<lenLeft; i++) {
		left[i] = arr[k];
		k++;
	}

	//copy values from original array to right array
	k = mid+1;
	for(int i=0; i<lenRight; i++) {
		right[i] = arr[k];
		k++;
	}

	//actual merge logic here
	//left array is already sorted
	//right array is already sorted
	int leftIndex = 0;
	int rightIndex = 0;
	//yahi pr galti karte h log
	int mainArrayIndex = s;

	while(leftIndex < lenLeft &&  rightIndex < lenRight) {
		
		if(left[leftIndex] < right[rightIndex] ) {
			arr[mainArrayIndex] =  left[leftIndex];
			mainArrayIndex++;
			leftIndex++;
		}
		else {
			arr[mainArrayIndex] =  right[rightIndex];
			mainArrayIndex++;
			rightIndex++;
		}
	}


	//2 more cases

	//1 case -> left array exhaust but right array me element abhi bhi bache hai
	while(rightIndex < lenRight) {
		arr[mainArrayIndex] =  right[rightIndex];
		mainArrayIndex++;
		rightIndex++;
	}
	

	//2nd case -> rigght array exhaust but left array me element abhi bhi bache hai
	while(leftIndex < lenLeft) {
		arr[mainArrayIndex] =  left[leftIndex];
		mainArrayIndex++;
		leftIndex++;
	}
	//1 more step pending
	delete[] left;
	delete[] right;
}

void mergeSort(int arr[], int s, int e){
  // base case
  // invalid array
  if(s>e) return;

  // single element array
  if(s==e) return;

  // break
  int mid = (s+e)/2;

  // left
  mergeSort(arr, s, mid);

  // right
  mergeSort(arr, mid+1, e);

  // merge
  merge(arr, s, e);


}
int main()
{
  int arr[] = {4,5,7,8,1,3,2,5};
  int size = 8;
  int s = 0;
  int e = size - 1;

  mergeSort(arr, s, e);

  cout << "Before merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	
	mergeSort(arr,s,e);

	cout << "After merge sort: " << endl;
	for(int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;


    return 0;
}
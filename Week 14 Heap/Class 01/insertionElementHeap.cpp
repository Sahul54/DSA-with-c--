#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int *arr;
    int capacity;
    int size;

    Heap (int capacity){
        this->arr = new int[capacity];
        this->capacity = capacity;

        // Size ->current size of heap
        this->size = 0;
    }

    // Insertion element
    void insert(int val){
        if(size == capacity){
            cout<<"Heap overflow"<<endl;
            return;
        }

        // Size increased kro[indexing 1 based]
        size++;
        int index = size;
        arr[index] = val;

        // take the value in current postion
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                // swap kardo
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                // stop kro 
                break;
            }
            
        }
        
    }
    void PrintHeap(){
        for(int i=0; i<=size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

     int deleteHeap(){
        int answer = arr[1];

        // replacement 
        arr[1] = arr[size];

        // last element ko delete kro or uski orginal position mai le kar aawo
        size--;

        int index = 1;
        while(index < size){
            int leftIndex = 2*index;
            int rightIndex = 2*index+1;
            int largestIndex = index;

            // find krna hai sabse bada element kon hai
            if(leftIndex <= size && arr[largestIndex] < arr[leftIndex]){
                largestIndex = leftIndex;
            }
            if(rightIndex <= size && arr[largestIndex] < arr[rightIndex]){
                largestIndex = rightIndex;
            }

            //  no change;
            if(index == largestIndex){
                break;
            }
            else{
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
        }
        return answer;
    }
   

};

void heapify(int *arr, int n, int index) {
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    int largestIndex = index;

    // Ensure we are within bounds before accessing
    if (leftIndex <= n && arr[leftIndex] > arr[largestIndex]) {
        largestIndex = leftIndex;
    }
    if (rightIndex <= n && arr[rightIndex] > arr[largestIndex]) {
        largestIndex = rightIndex;
    }

    // Swap if the largest index is not the current index
    if (largestIndex != index) {
        swap(arr[index], arr[largestIndex]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largestIndex);
    }
}

void buildHeap(int arr[], int n) {
    for (int index = n / 2; index > 0; index--) {
        heapify(arr, n, index);
    }
}

void heapSort(int arr[], int n) {
    // Build the heap
    buildHeap(arr, n);
    
    // One by one extract elements from heap
    while (n > 1) {
        swap(arr[1], arr[n]); // Swap the root of the heap with the last element
        n--; // Reduce the size of heap
        heapify(arr, n, 1); // Heapify the root element again
    }
}

int main(){
    int arr[] = {-1, 4, 45, 6, 7, 9, 8};
    int n = 6;

    buildHeap(arr, n);
    cout<<"Printing Heap: "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    heapSort(arr, n);
    cout<<"Printing Heap: "<<endl;
    for(int i=1; i<=n; i++){
        cout<<arr[i]<<" ";
    }


    // int capacity = 5;
    // Heap h(capacity);

    // // Inseryiion of element
    // h.insert(10);
    // h.insert(20);
    // h.insert(5);
    // h.insert(11);
    // h.insert(6);

    // cout<<"Printing Heap : "<<endl;
    // h.PrintHeap();

    // cout<<"Delete heap Element: "<<h.deleteHeap();
    
    // cout<<"Printing Heap : "<<endl;
    // h.PrintHeap();

    

return 0;
}
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



int main(){
    int capacity = 5;
    Heap h(capacity);

    // Inseryiion of element
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);

    cout<<"Printing Heap : "<<endl;
    h.PrintHeap();

    cout<<"Delete heap Element: "<<h.deleteHeap();
    
    cout<<"Printing Heap : "<<endl;
    h.PrintHeap();
return 0;
}
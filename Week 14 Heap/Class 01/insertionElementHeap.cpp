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
return 0;
}
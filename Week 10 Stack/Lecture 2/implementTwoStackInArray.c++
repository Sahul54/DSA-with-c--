#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        this->size = size;
        this->arr = new int[size];

        this->top1 = -1;
        this->top2 = size;
    };

    void push1(int data){
         if(top2 - top1 == 1){
            //no space avilable
            cout<<"OVERFLOW"<<endl;
         }
         else{
            top1++;
            arr[top1] = data;
         }
    }

    void push2(int data){
        if(top2 - top1 == 1){
            //no space
            cout<<"OVERFLOW"<<endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop1(int data){
        if(top1 == -1){
            //empty
            cout<<"UNDERFLOW"<<endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2(int data){
        if(top2 == size){
            cout<<"UNDERFLOW"<<endl;
        }
        else{
        arr[top2] = 0;
        top2++;
    }
  }

  void print(){
    cout<<endl;
    cout<<"Top1: "<<top1<<endl;
    cout<<"Top2: "<<top2<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};
int main(){
    Stack st(6);
    st.print();

    st.push1(10);
    st.print();
    st.push1(10);
    st.print();
    st.push1(10);
    st.print();
    st.push1(10);
    st.print();
    st.push2(10);
    st.print();
    st.push2(10);
    st.print();
    
  return 0;
}
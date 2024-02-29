#include<bits/stdc++.h>
using namespace std;

class abc{
public:
 static int x, y;
void print(){
  cout<<x<<" "<<y<<endl;
  // cout<<this->x<<" "<<this->y<<endl;   // yese bhi use kr sakte hai   

  
}
};
  // static member ko Bahar use krna padta h
int abc:: x;
int abc:: y;
int main()
{   
    // abc obj1 = {1,2};
    // abc obj2 = {2,3};
    // obj1.print();
    // obj2.print();

    // static data member

    abc obj1;
    obj1.x = 1;
    obj1.y = 2;
    obj1.print();
    abc obj2;
    obj2.x = 4;
    obj2.y = 4;
    obj1.print();
    obj2.print();
    

    return 0;
}
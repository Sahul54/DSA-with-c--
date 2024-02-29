#include<bits/stdc++.h>
using namespace std;

int main()
{

    const int x = 10;  // x is const variable
    cout<< "x : "<< x<<endl;
    // initilization can be done. but we cant re- assign a value
    // x = 11;
    // int *p = &x;
    // *p = 10;   // ye chij pahle kam krta tha.. but ab modern compiler mai kam nhi krta hai....

    //  2. cont with Pointer

    // const int *a = new int(5);  // const data , new const pointer

  //   int const *a = new int (9);  //yese bhi likh sakate hai
  //  // *a = 2;  // ye hm nhi chala p arahe the
  //   // delete a;
  //   cout<< *a<< endl;
  //   int b = 5;
  //   a = &b;  // pointer ko hm hal pa raahe hai....
  //   cout<<b<<endl;

  // ---- CONST Pointer , but non-const data---

   int *const a = new int(2);
   cout<<*a<<endl;
   *a = 20; // ye chal jaye ga..
   cout<<*a<<endl;

   int b = 50;
  //  a= &b // nhi chalega , CONST Pointer


  // ---------CONST Pointer , Const data

  const int *const j = new int(1);
  cout<<j<<endl; // addrase
  *a = 50;
  int b = 6;
  // a= &b;  // nhi chalega
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{   // Create Char array
    char ch[5];
    // input
    //cin>>ch;

    // Delivator--------
    // jb bhi inter (\n), tab(\t), space(_) to aage ka print nhi ho gaa

    cin.getline(ch,100);

    // Output
    cout<<"ch is :" << ch <<endl;

    // cout<<ch[2] <<endl;  // char mai direct value le pate h. but array mai loctaion dena padta hai ... arr[5]
  //  cout<<"Size of ch is: " <<sizeof(ch);

  //   print using loop

  // for (int i = 0; i < 5; i++)
  // {
  //   cout<<" At Index" << i <<"value is: " <<ch[i]<<endl;
  // }
  // int temp = (int)ch[4];
  // cout<<"value is : "<<temp<<endl;


    return 0;
}
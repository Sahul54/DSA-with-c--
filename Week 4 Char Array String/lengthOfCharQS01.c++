#include<bits/stdc++.h>
using namespace std;

int findLength(char ch[], int size){
  int length = 0;
  for(int i = 0; i < size; i++){
    if (ch[i] == '\0')
    {
      // ruk jao
      break;
    }
    length++;
    
  }
  return length;
}

int main()
{   
  char ch[100];
  cout<<"Enter String" <<endl;
  // cin>>ch;
  cin.getline(ch,100);
  int len = findLength(ch, 100);
  cout<<"Length og String is :" <<len <<endl;

    return 0;
}
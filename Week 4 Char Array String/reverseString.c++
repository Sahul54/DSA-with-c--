#include<bits/stdc++.h>
using namespace std;

int findlength(char ch[], int size){
  int index = 0;
  while (ch[index] != '\0')
  {
    index++;
  }
  return index; 
}

void reverse(char ch[], int size){
  int i = 0;
  int j = size-1;
  while(i <= j){
     swap(ch[i], ch[j]);
     i++;
     j--;
  }
}
int main()
{
  char ch[100];


  cin.getline(ch,100);
  cout<<"Before : "<<ch<<endl;
  int len = findlength(ch,100);
  reverse(ch,len);
  cout<<"After : "<<ch<<endl;
    return 0;
}
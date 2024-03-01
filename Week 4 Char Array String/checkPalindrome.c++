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

bool cheakPalindrome(char ch[], int size){
  int i = 0;
  int j = size - 1;
   while (i <= j)
   {
    if (ch[i] == ch[j])
    {
      i++;
      j--;
    }
    else
    {
      return false;
    }
  
   }
  //  sab case true h to yaha tk aa chuke hai
    return true;
   
}
int main()
{   
  char ch[100];
  cin.getline(ch, 100);

  int len = findlength(ch,100);
  cout<<len;
  
  bool a = cheakPalindrome(ch, len);
  cout<<a <<endl;
  if (a == 0)
  {
    cout<<"invalid Paildrome" <<endl;
  }
  else{
    cout<<"valid Paildrome" <<endl;
  }
  
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void convertLowToUpp(char ch[], int size){
  int index = 0;
  while (ch[index] != '\0')
  {
    char currentChar = ch[index];
    // if (currentChar >= 'a' && currentChar <='z')
    if(currentChar=='@') // space
     {
        // ch[index] = currentChar - 'a' +'A';
        ch[index] = ' '; // space

    }
    index++;
    
  }
  
}

int main()
{ 

  char ch[100];
  cin.getline(ch, 100);

  cout<<"Before : "<<ch <<endl;
  convertLowToUpp(ch, 100);
  cout<<"After : "<<ch;
  
    return 0;
}
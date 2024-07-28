#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c || c<= 'z'){
        cout<<-1;
    }
	else if('A'<=c || c<= 'Z'){
        cout<<0;
    }
    else{
        cout<<1;
    }
}
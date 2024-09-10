#include<bits/stdc++.h>
using namespace std;

int countVilly(string &str){
    int count = 1;
    for(int i =0; i<str.length(); i++){
        if(str[i] == 'U'){
            count += 1;
        }
        else if(str[i] == 'D'){
            // if (count ==1){
            //     break;
            // }
            count -= 1;
        }

    }
    return count;
}


int main(){
string str = "UDDDUDUU";
cout<<countVilly(str);
return 0;
}
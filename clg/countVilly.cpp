#include<bits/stdc++.h>
using namespace std;

int countVilly(string &str){
    int count = 1;
    for(int i =0; i<str.length(); i++){
        if(str[i] == 'U'){
            count += 1;
        }
        else if(str[i] == 'D'){
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



// public class Main {
//     public static int countVilly(String str) {
//         int count = 1;
//         for (int i = 0; i < str.length(); i++) {
//             if (str.charAt(i) == 'U') {
//                 count += 1;
//             } else if (str.charAt(i) == 'D') {
//                 count -= 1;
//             }
//         }
//         return count;
//     }

//     public static void main(String[] args) {
//         String str = "UDDDUDUU";
//         System.out.println(countVilly(str));
//     }
// }



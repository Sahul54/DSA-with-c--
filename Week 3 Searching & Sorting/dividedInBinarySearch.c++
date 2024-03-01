#include<bits/stdc++.h>
using namespace std;


int getans(int divisor, int dividend){
  int s = 0;
  int e = dividend;
  int mid = s + (e-s)/2;
  int ans = -1;


  while (s <= e)
  {
    cout << "s : "<<s<<" e :" <<e <<endl;
    if(mid*divisor == dividend){
      return mid;
    }
   if(mid*divisor < dividend){
      // ans store
      ans = mid;
      // right mai jao
      s = mid + 1;

    }
    else{
      //  left mai jao
      e = mid - 1;

    }
  //   update mid
  mid = s + (e-s)/2;
  }
   return ans;
}
int main()
{
    int divisor = 7;
    int dividend = 29;
    int ans = getans(divisor, dividend);

    //  agr divisor or dividend -nev mai hai to ans -ve mai ho gaa........

    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend >0)){
      ans = 0 - ans;
    }
   
  //   agr divisor aur dividend 0 hai to ye case handel kare gaa.........

  // cout << divisor;
    if((divisor || dividend) == 0){
      ans = 0;
    }
    cout<<"Final Ans is: "  <<ans<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class copy
{
    int a, b, c;

public:
    copy()
    {
        a = 1, b = 5, c = 7;
    }
    copy(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    copy(copy &d)
    {
        a = d.a;
        b = d.b;
        c = d.c;
    }

    int display()
    {
        cout << a << b << c;
    }
};

int main(){

     copy c;
     
}
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,c;
    a=0;
    b=0;
    c=0;
    cin >> a;
    cin >> b;
    while(c<=b)
    {
        cout << a;
        c=c+1;
    }
    cin.get();
    return 0;
}

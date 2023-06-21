#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long long num;
    cin>>num;
    if(num == 0)
    {
        cout<<1;
        return 0;
    }
    if(num % 4 == 0)
    {
        cout<<6;
    }else if(num % 4 == 1)
    {
        cout<<8;
    }
    else if(num % 4 == 2)
    {
        cout<<4;
    }
    else if(num % 4 == 3)
    {
        cout<<2;
    }
}

#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
int main()
{
    FAST();
    long long n;
    cin>>n;
    if(n % 2 != 0)
    {
        n+=1;
        n/=2;
        cout<<(-1)*n;
    }
    else
    {
        n/=2;
        cout<<n;
    }
}

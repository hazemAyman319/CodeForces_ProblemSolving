#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
long long gcd(long long num1 , long long num2)
{
    while(num2 != 0)
    {
        return gcd(num2 , num1 % num2);
    }
    return num1;
}
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
long long lcm(long long num1 , long long num2)
{
    return ((num1/gcd(num1 , num2))*num2);
}
int main()
{
    FAST();
    long long num1 , num2 , num3 , num4;
    char c1 , c2;
    cin>>num1>>c1>>num2>>num3>>c2>>num4;
    cout<<lcm(num1 , num3)<<"/"<<gcd(num2 , num4);
}

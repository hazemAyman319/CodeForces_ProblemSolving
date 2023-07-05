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
    int steps , multiple , min;
    cin>>steps>>multiple;
    if(steps%2==0)
    {
        min=steps/2;
    }else{
        min = (steps/2)+1;
    }
    for(int i=min;i<=steps;i++)
    {
        if(i%multiple==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
}

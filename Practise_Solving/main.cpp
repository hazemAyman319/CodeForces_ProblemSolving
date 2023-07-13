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
    int size , div;
    string result ="";
    cin>>size>>div;
    //size < 2 && div = 10
    //the only case to print -1
    if(size < 2 && div == 10)
    {
        cout<<-1<<endl;
    }
    //size >= 2 && div = 10
    else if(size >= 2 && div == 10)
    {
        for(int i=0;i<size-1;i++)
        {
            result += 1 + '0';
        }
        result += 0 + '0';
        cout<<result<<endl;
    }
    //size = x && div != 10
    else
    {
        for(int i=0;i<size;i++)
        {
            result += div + '0';
        }
        cout<<result<<endl;
    }
}

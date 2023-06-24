#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long size , min_time=10000000000000, flag=0 , temp , real_temp;
    cin>>size;
    char dir[size];
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>dir[i];
    }
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<size;i++)
    {
        if(dir[i-1]=='R' && dir[i]=='L')
        {
            flag=1;
            temp=(arr[i]-arr[i-1])/2;
            if(min_time > temp)
            {
                min_time = temp;
            }
        }
    }
    if(flag == 0)
    {
        cout<<-1;
    }
    else
    {
        cout<<min_time;
    }
}

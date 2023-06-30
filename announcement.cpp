#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
long long freq[21474836]={0};
int main()
{
    long long nums , counter=0;
    cin>>nums;
    long long arr[nums];
    for(long long i=0;i<nums;i++)
    {
        cin>>arr[i];
    }
    for(long long i=0;i<nums;i++)
    {
        freq[arr[i]]++;
    }
    for(long long i=0;i<21474836;i++)
    {
        while(freq[i]>1)
        {
            freq[i]--;
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<-1;
    }
    else
    {
        cout<<counter;
    }
}

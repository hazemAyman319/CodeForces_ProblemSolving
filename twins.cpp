#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size , sum1=0 , tot_sum=0 , counter=0; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        tot_sum += arr[i];
    }
    sort(arr , arr+size);
    for(int i=size-1;i>=0;i--)
    {
        sum1+=arr[i];
        tot_sum -= arr[i];
        if(sum1 > tot_sum)
        {
            counter++;
            break;
        }
        else
        {
            counter++;
        }
    }
    cout<<counter;
}

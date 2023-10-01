#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int range , target;
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
int main()
{
    FAST();
    int size , query , sum=0 , index;
    cin>>size>>query;
    int arr[size+1]={0};
    for(int i=1;i<=size;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1 , arr+size+1 , greater<int>());
    for(int i=1;i<=size;i++)
    {
        arr[i]+=arr[i-1];
    }
    while(query--)
    {
        int l,r; cin>>l>>r;
        if(l==1)
        {
            sum+=arr[r];
        }
        else
        {
            index=r-l;
            r=r-index;
            sum+=arr[r];
        }
    }
    cout<<sum;
}

#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size , min_dis , max_dis; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {
            min_dis = arr[i+1]-arr[i];
            max_dis = arr[size-1]-arr[i];
            cout<<min_dis<<" "<<max_dis<<endl;
            continue;
        }
        if(i==size-1)
        {
            min_dis = arr[size-1]-arr[size-2];
            max_dis = arr[size-1]-arr[0];
            cout<<min_dis<<" "<<max_dis<<endl;
            continue;
        }
        min_dis = min(arr[i]-arr[i-1] , arr[i+1]-arr[i]);
        max_dis = max(arr[i] - arr[0], arr[size-1]-arr[i]);
        cout<<min_dis<<" "<<max_dis<<endl;
    }
}

#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stu , pu;
    cin>>stu>>pu;
    int arr[pu];
    for(int i=0;i<pu;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+pu);
    long long result = arr[stu - 1] - arr[0];
    for(int i=1;i<=pu-stu;i++)
    {
        if(arr[i+stu-1]-arr[i]<result)
        {
            result=arr[i+stu-1]-arr[i];
        }
    }
    cout<<result;
}

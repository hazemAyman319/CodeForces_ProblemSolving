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
    int size , flag=0;
    string res="NO";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+size);
    for(int i=size-1;i>=2;i--)
    {
        if(arr[i] + arr[i-1] > arr[i-2] && arr[i-1] + arr[i-2] > arr[i] && arr[i] + arr[i-2] > arr[i-1])
        {
            res="YES";
            break;
        }
    }
    cout<<res;
}

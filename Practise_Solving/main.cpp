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
    int size , num;
    cin>>size>>num;
    int points = size * 2 + 1;
    int arr[points];
    for(int i=0;i<points;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<points;i++)
    {
        if(arr[i]>arr[i-1] + 1 && arr[i]>arr[i+1] + 1)
        {
            arr[i]--;
            num--;
            if(num==0)
                break;
        }
    }
    for(int i=0;i<points;i++)
    {
        cout<<arr[i]<<" ";
    }
}

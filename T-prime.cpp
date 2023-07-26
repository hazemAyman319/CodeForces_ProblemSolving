#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
long long arr[1000001]={0};
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
int main()
{
    FAST();
    arr[1]=1;
    for(long long i=2; i<=1000; i++)
    {
        for(long long z=2*i; z<=1000000;z+=i)
        {
            arr[z]=1;
        }
    }
    int size;
    cin>>size;
    while(size--)
    {
        long long num; cin>>num;
        long long sq = sqrt(num);
        if(sq * sq == num && arr[sq]==0){
                cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

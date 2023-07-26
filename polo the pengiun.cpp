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
    long long size , num , cover=0; cin>>size>>num;
    for(int i=0;i<size;i++)
    {
        int x,y;
        cin>>x>>y;
        cover+=(y-x+1);
    }
    cover %= num;
    if(cover == 0)
    {
        cout<<0;
    }else
    {
        cout<<num-cover;
    }
}
/*
int size , div , start = 1000000 , end=-1000000;
    cin>>size>>div;
    int num1 , num2 , counter=0;
    pair<int , int>pair_arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>num1>>num2;
        pair_arr[i].first=num1;
        pair_arr[i].second=num2;
    }
    for(int i=1;i<size;i++)
    {
        start = min(start , min(pair_arr[i].first , pair_arr[i-1].first));
        end = max(end ,max(pair_arr[i].second , pair_arr[i-1].second));
    }
    int dis = end - start + 1;
    while(dis % div != 0)
    {
        dis++;
        counter++;
    }
    cout<<counter;
*/

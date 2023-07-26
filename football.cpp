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
    int size;cin>>size;
    map<string , int>foot;
    for(int i=0;i<size;i++)
    {
        string key;
        cin>>key;
        if(foot[key]==0)
        {
            foot[key]=1;
        }
        else
        {
            foot[key]+=1;
        }
    }
    map<string , int>:: iterator myFoot;
    string resKey = foot.begin() -> first;
    int resValue = foot.begin() -> second;
    for(myFoot = foot.begin(); myFoot!=foot.end();myFoot++)
    {
        if(myFoot -> second > resValue)
        {
            resKey = myFoot -> first;
            resValue = myFoot -> second;
        }
    }
    cout<<resKey<<endl;
}

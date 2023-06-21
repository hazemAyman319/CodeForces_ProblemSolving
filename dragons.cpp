#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> dr;
    long long initEN , num , enD , accEn;
    cin>>initEN>>num;
    for(int i=0; i<num;i++)
    {
        cin>>enD>>accEn;
        dr.push_back(make_pair(enD,accEn));
    }
    sort(dr.begin() , dr.end());
    bool res=1;
    for(int i=0; i<num; i++)
    {
        if(initEN > dr[i].first)
        {
            initEN+=dr[i].second;
        }
        else
        {
            res = 0;
            break;
        }
    }
    if(res==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

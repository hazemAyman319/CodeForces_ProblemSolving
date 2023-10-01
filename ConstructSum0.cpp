#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int range , target;
void FAST()
{
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}
void solve(int range , int target)
{
    vector<int>vec;
    int sum=0 , target2 = target;
    if(range >= target)
    {
        cout<<"1 "<<target<<endl;
        return;
    }
    if(range < target)
    {
        for(int i=range;i>=1;i--)
        {
            if(target >= i)
            {
                target -= i;
                vec.push_back(i);
            }
        }
        for(int i=0;i<vec.size();i++)
        {
            sum+=vec[i];
        }
        if(sum==target2)
        {
            cout<<vec.size()<<" ";
            for(int i=0;i<vec.size();i++)
            {
                if(i==vec.size()-1)
                {
                    cout<<vec[i];
                }
                cout<<vec[i]<<" ";
            }
        }
        if(sum!=target2)
        {
            cout<<"-1";
        }
        cout<<endl;
    }
}
int main()
{
    FAST();
    int cases=1; cin>>cases;
    for(int i=1;i<=cases;i++)
    {
        cin>>range>>target;
        solve(range , target);
    }
}

/*
int from=1 , to , target;
    vector<pair<int , int>>pairs;
    cin>>to>>target;
    for(int i=from;i<=to;i++)
    {
        for(int j=from+1;j<=to;j++)
        {
            if(i==target)
            {
                pairs.push_back({i , 0});
            }
            if(i+j == target)
            {
                pairs.push_back({i , j});
            }
        }
    }
    if(pairs.empty())
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<"2 "<<pairs[0].first<<" "<<pairs[0].second<<endl;
    }
*/


/*if(range >= target/2 && range < target)
    {
        cout<<"2 "<<range<<" "<<target-range<<endl;
        return;
    }*/

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
    string sent , recei , new_string;
    int left_pan=0 , right_pan=0 , pos;
    cin>>sent>>recei;
    pos = sent.find('|');
    for(int i=0;i<sent.size();i++)
    {
        if(sent[i] && i>pos)
        {
            right_pan++;
        }
        if(sent[i] && i<pos)
        {
            left_pan++;
        }
    }
    if(recei.size()!=max(right_pan , left_pan)-min(right_pan , left_pan))
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        if(right_pan==min(right_pan , left_pan))
        {
            new_string=sent+recei;
            cout<<new_string;
        }
        if(left_pan==min(right_pan , left_pan))
        {
            new_string=recei+sent;
            cout<<new_string;
        }
    }
}

#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string st1 , st2; cin>>st1>>st2;
    int i , j;
    i=st1.size();
    j=st2.size();
    while(st1!="" && st2!="")
    {
        if(st1[i-1]!=st2[j-1])
        {
            break;
        }
        st1.erase(i-1);
        st2.erase(j-1);
        i--;
        j--;
    }
    int res=st1.size()+st2.size();
    cout<<res;
    return 0;
}
/*
int count=0 , add;
    int freq1[27]={0};
    int freq2[27]={0};
    for(int i=0;i<st1.size();i++)
    {
        freq1[st1[i]-'a']++;
    }
    for(int i=0;i<st2.size();i++)
    {
        freq2[st2[i]-'a']++;
    }
    for(int i=0;i<27;i++)
    {
        if(freq1[i]>0 && freq2[i]>0)
        {
            add=min(freq1[i] , freq2[i]);
            count+=add;
        }
    }
    int res = (st1.size()-count)+(st2.size()-count);
    cout<<res;
*/

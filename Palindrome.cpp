#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    int size=word.size();
    bool pali = 1;
    for(int i=0;i<size;i++)
    {
        if(word[i] != word[size-i-1])
        {
            pali = 0;
        }
    }
    if(pali==0)
    {
        cout<<size<<endl;
        return 0;
    }
    long long arr[10000];
    for(int i=0;i<size;i++)
    {
        arr[word[i]]++;
    }
    long long res=0;
    for(int i='a';i<='z';i++)
    {
        if(arr[i]>0)
        {
            res++;
        }
    }
    if(res==1)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<size - 1<<endl;
    }
}

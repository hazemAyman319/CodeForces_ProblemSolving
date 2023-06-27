#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int wires_no , shots , ch_wire , pos;
    cin>>wires_no;
    int birds[wires_no];
    for(int i=0;i<wires_no;i++)
    {
        cin>>birds[i];
    }
    cin>>shots;
    while(shots--)
    {
        cin>>ch_wire>>pos;
        if(ch_wire == wires_no)
        {
            birds[ch_wire-2]+=(birds[ch_wire-1]-(birds[ch_wire-1]-pos+1));
            birds[ch_wire-1]=0;
            continue;
        }
        if(ch_wire == 1)
        {
             birds[ch_wire]+=(birds[ch_wire-1]-pos);
             birds[ch_wire-1]=0;
             continue;
        }
        birds[ch_wire]+=(birds[ch_wire-1]-pos);
        birds[ch_wire-2]+=(birds[ch_wire-1]-(birds[ch_wire-1]-pos+1));
        birds[ch_wire-1]=0;
    }
    for(int i=0;i<wires_no;i++)
    {
        cout<<birds[i]<<"\n";
    }
}

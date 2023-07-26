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
    int size;cin>>size;
    int arr[size];
    bool b=0;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        double r1 = (double)arr[i]/2;
        if(arr[i] % 2 == 0)
        {
            arr[i]=arr[i]/2;
        }
        else
        {
            if(b==0)
            {
                arr[i]=ceil(r1);
                b=1;
            }
            else
            {
                arr[i]=floor(r1);
                b=0;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
/*
int size , up=1 , down=0;cin>>size;
    double arr[size] , brr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        brr[i]=arr[i]/2.0;
        if(brr[i]!=(int)brr[i])
        {
            if(up=1)
            {
                brr[i]=floor(brr[i]);
                down=1;
                up=0;
                continue;
            }
            if(down=1)
            {
                brr[i]=ceil(brr[i]);
                up=1;
                down=0;
                continue;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        cout<<brr[i]<<"\n";
    }
*/

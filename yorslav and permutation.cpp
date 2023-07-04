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
    int nums , flag=0 , number;
    cin>>nums;
    int arr[nums] , freq[10000]={0};
    if(nums==1)
    {
        cin>>number;
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        for(int i=0;i<nums;i++)
        {
                cin>>arr[i];
        }
        for(int i=0;i<nums;i++)
        {
                freq[arr[i]]++;
        }
        for(int i=0;i<10000;i++)
        {
            if(nums % 2 == 0)
            {
                if(freq[i] > nums/2)
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(nums % 2 !=0)
            {
                if(freq[i] >= (nums/2)+2)
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag!=1)
        {
             cout<<"YES"<<endl;
        }
    }
}



/*  if(flag==0)
        {
            for(int i=0;i<nums;i++)
            {
                int index = i + nums;
                if(arr[index % nums]==arr[(index+1) % nums])
                {
                    if(arr[(index-2) % nums] != arr[index % nums])
                    {
                        swap(arr[index % nums] , arr[(index-1) % nums]);
                    }
                }
                if(arr[index % nums]!=arr[(index+1) % nums])
                {
                    if(arr[(index+2) % nums] != arr[index % nums])
                    {
                        swap(arr[index % nums] , arr[(index+1) % nums]);
                    }
                }
                index=0;
            }
        }
        for(int i=0;i<nums;i++)
        {
                cout<<arr[i]<<" ";
        }*/

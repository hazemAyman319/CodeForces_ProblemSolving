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
    int cases , flag=0; cin>>cases;
    char arr[3][3] , char_X='X' , char_O='O' , char_p='+';
    char ans_rr[1][1];
    while(cases--)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]==arr[i+1][j] && arr[i][j]==arr[i+2][j])
                {
                    cout<<arr[i][j]<<endl;
                    ans_rr[0][0]=arr[i][j];
                    break;
                }
                if(arr[i][j]==arr[i][j+1] && arr[i][j]==arr[i][j+2])
                {
                    cout<<arr[i][j]<<endl;
                    ans_rr[0][0]=arr[i][j];
                    break;
                }
                if(i==1 && j==1)
                {
                    if(arr[i][j]==arr[i+1][j+1] && arr[i][j]==arr[i-1][j-1])
                    {
                        cout<<arr[i][j]<<endl;
                        ans_rr[0][0]=arr[i][j];
                        break;
                    }
                    if(arr[i][j]==arr[i+1][j-1] && arr[i][j]==arr[i-1][j+1])
                    {
                        cout<<arr[i][j]<<endl;
                        ans_rr[0][0]=arr[i][j];
                        break;
                    }
                }
            }
        }
        if(ans_rr[0][0]=='.')
        {
            cout<<"DRAW"<<endl;
        }
    }
}

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
    int row , column , process;
    cin>>row>>column>>process;
    // array starting from 1 index
    int arr[row+1][column+1];
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cin>>arr[i][j];
        }
    }
    int arrR[row+1];
    int arrC[column+1];
    for(int i=1;i<=row;i++)
    {
        arrR[i]=i;
    }
    for(int i=1;i<=column;i++)
    {
        arrC[i]=i;
    }
    while(process--)
    {
        char c;
        int num1 , num2;
        cin>>c>>num1>>num2;
        if(c=='g')
        {
            int r = arrR[num1];
            int c = arrC[num2];
            cout<<arr[r][c]<<"\n";
        }
        else if(c=='r')
        {
            swap(arrR[num1],arrR[num2]);
        }
        else if(c=='c')
        {
            swap(arrC[num1],arrC[num2]);
        }
    }
}




/*
    FAST();
    char letter;
    int line1 , line2;
    int rows , columns , ins; cin>>rows>>columns>>ins;
    int arr[rows][columns];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>arr[i][j];
        }
    }
    while(ins--)
    {
        cin>>letter>>line1>>line2;
        if(letter == 'c')
        {
            for(int i=0;i<rows;i++)
            {
                swap(arr[i][line1-1] , arr[i][line2-1]);
            }
            continue;
        }
        if(letter == 'r')
        {
            for(int i=0;i<columns;i++)
            {
                swap(arr[line1-1][i] , arr[line2-1][i]);
            }
            continue;
        }
        if(letter == 'g')
        {
            cout<<arr[line1-1][line2-1]<<endl;
        }
    }
    */

#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
const int size = 1e3;
char arr[size][size];
int visit[size][size];
vector<pair<pair<int , int> , int> > res;
int n , m;
void add(int row , int column , int moves)
{
    int colMove = column+moves;
    int col=column;
    while(col<=colMove)
    {
        visit[row][col]=1;
        col++;
    }
    colMove = column-moves;
    col=column;
    while(col>=colMove)
    {
        visit[row][col]=1;
        col--;
    }
    int rowMove = row+moves;
    int ro = row;
    while(ro<=rowMove)
    {
        visit[ro][column]=1;
        ro++;
    }
    rowMove = row-moves;
    ro = row;
    while(ro>=rowMove)
    {
        visit[ro][column]=1;
        ro--;
    }
}
int checkStars(int row , int column)
{
    int right= 0 , left=0 , upper = 0 , lower=0;
    int col = column , ro = row;
    while(col <= m && arr[row][col]=='*')
    {
        right++;
        col++;
    }
    col = column;
    while(col >= 1 && arr[row][col]=='*')
    {
        left++;
        col--;
    }
    while(ro >= 1 && arr[ro][column]=='*')
    {
        upper++;
        ro--;
    }
    ro = row;
    while(ro <= n && arr[ro][column]=='*')
    {
        lower++;
        ro--;
    }
    return min(min(left-1,right-1),min(upper-1 , lower-1));
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=m;z++)
        {
            arr[i][z]='.';
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=m;z++)
        {
            visit[i][z]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=m;z++)
        {
            cin>>arr[i][z];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=m;z++)
        {
            if(arr[i][z]=='*')
            {
                int stars = checkStars(i ,z);
                if(stars>0)
                {
                    res.push_back({{i,z},stars});
                    add(i , z , stars);
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int z=1;z<=m;z++)
        {
            if(visit[i][z]==0)
            {
                cout<<-1;
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].first.first<<" "<<res[i].first.second<<" "<<res[i].second<<endl;
    }
}

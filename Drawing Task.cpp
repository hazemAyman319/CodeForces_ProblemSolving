#include <iostream>
using namespace std;
int main()
{
    int row , column , process;
    cin>>row>>column>>process;
    char arr[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            arr[i][j]='.';
        }
    }
    while(process--)
    {
        int r1 , c1 , r2 , c2;
        char c;
        cin>>r1>>c1>>r2>>c2>>c;
        for(int i=min(r1 , r2)-1; i<=max(r1 , r2)-1;i++)
        {
            for(int j=min(c1 , c2)-1;j<=max(c1 , c2)-1;j++)
            {
                arr[i][j]=c;
            }
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

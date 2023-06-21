#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int size = str.size();
    bool check[size];
    for(int i=0 ; i< size ; i++)
    {
        check[i]=0;
    }
    for(int i=0 ; i < size; i++)
    {
        if(check[i]==1)
        {
            continue;
        }
        int count=1;
        for(int j=i+1 ; j < size ; j++)
        {
            if(str[i]==str[j])
            {
                check[j]=1;
                count++;
            }
        }
        cout<<str[i]<< " : " << count << endl;
    }
    return 0;
}

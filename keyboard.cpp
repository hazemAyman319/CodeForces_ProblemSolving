#include <iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./" , s1 , s2;
    char LR;
    cin>>LR>>s1;
    for(int i=0;i<s2.size();i++)
    {
        int index = s1.find(s2[i]);
        if(LR=='R'){
            s3+=s1[index-1];
        }
        else
        {
            s3+=s1[index+1];
        }
    }
    cout<<s2;
    /*char arr[3][10] = {{'q','w','e','r','t','y','u','i','o','p'} ,
                       {'a','s','d','f','g','h','j','k','l',';'} ,
                       {'z','x','c','v','b','n','m',',','.','/'}};
    char dir;
    string word;
    cin>>dir>>word;
    if(dir == 'R')
    {
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int z=0;z<10;z++)
                {
                    if(word[i]==arr[j][z])
                    {
                        word[i]=arr[j][z-1];
                    }
                }
            }
        }
    }
    if(dir == 'L')
    {
        for(int i=0;i<word.size();i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int z=0;z<10;z++)
                {
                    if(word[i]==arr[j][z])
                    {
                        word[i]=arr[j][z+1];
                    }
                }
            }
        }
    }
    cout<<word;*/
}

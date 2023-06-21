#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num;
	cin>>num;
	double res = log2(num)/log2(2);
	if((res - (long long)res) != 0){
		cout<<"NO"<<endl;
	} else {
		cout<<"YES"<<endl;
	}
}
/*
long long int num;
    cin>>num;
    float x = log(num) / log(2);
    int y = log(num) / log(2);
    if(x == y)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
*/

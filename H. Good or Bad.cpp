#include<bits/stdc++.h>
using namespace std;
int main()
{
	int words;// 2
	cin>>words;
	while(words--){
		string word;
		//  01234567
		// "11111110"  8
		cin>>word; // 010  101
		int size = word.size();
		int flag = 0;
		for(int i=0;i<size-2;i++){ // i = 2
			if((word[i] == '0' && word[i+1] == '1' && word[i+2] == '0') ||
			(word[i] == '1' && word[i+1] == '0' && word[i+2] == '1')){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			cout<<"Good"<<endl;
		} else {
			cout<<"Bad"<<endl;
		}
	}
  /*  int Number;
    cin>>Number;
    string str;
    int flag;
    while(Number--)
    {
      cin>>str;
      if(str.size() < 3)
      {
          return 0;
      }
      else if(str.size()>=3)
      {
          for(int i=0 ; i<str.size();i++)
          {
              if(str.substr(i,i+3)=="010" || str.substr(i,i+3)=="101")
              {
                flag=1;
                break;
              }
              else
              {
                flag=0;
                break;
              }
          }
      }
      if(flag==1)
      {
          cout<<"Good"<<endl;
      }
      else if(flag==0)
        cout<<"Bad"<<endl;
    }*/
}

#include <iostream>
using namespace std;
/*
3    11
3 % 2 = 1                             11
3/2 = 1
1%2 = 1
1/2 = 0
*/
int index = 0;
int *binary (int num){
	int bi[100]; // [1, 1, , .......]

	while(num != 0){
		bi[index] = num%2;
		num /= 2; // num = num /2; 0
		index++; // 2
	}
	return bi;
}
//                  **
// [1,1,,,,,,,,,,]  11                1001    1010
bool palindrome(int arr[]){

	for(int i=0,z=index-1;i<index,z>=0;i++,z--){
		if(arr[i] != arr[z]){
			return false;
		}
	}

	return true;
}

int main() {
	int num;
	cin>>num; // 3
	if(num % 2 == 0){   // 2 4 6 8 10 ......
		cout<<"NO"<<endl;
		return 0;
	}

	int index = 0;
	int bi[100]; // [1, 1, , .......]

	while(num != 0){
		bi[index] = num%2;
		num /= 2; // num = num /2; 0
		index++; // 2
	}

	for(int i=0,z=index-1;i<index,z>=0;i++,z--){
		if(bi[i] != bi[z]){
			cout<<"NO"<<endl;
			return 0;
		}
	}

	cout<<"YES"<<endl;


}
/*
void wonderful(int N)
{
    int counter=0;
    int bin[256];
    if(N % 2 !=0)
    {
    for(int i=0 ; i< N ; i++)
    {
        bin[i]=N%2;
        N/=2;
        counter++;
    }
    for(int i=0 ; i < counter/2; i++)
    {
        if(bin[i] != bin[N-i-1])
        {
            cout<<"NO";
            break;
        }
        else
        {
            cout<<"YES";
        }
    }
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
	int N;
	cin>>N;
	wonderful(N);
}





 int remainder , product =1 , bin=0;
    if(N % 2 !=0)
    {
    while(N)
    {
        remainder = N % 2;
        bin = bin + (remainder * product);
        N/=2;
        product *=10;
    }
    else
    {
        cout<<"NO";
    }
*/

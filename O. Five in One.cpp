#include<bits/stdc++.h>
using namespace std;
int countDivisor(int num){
	int m = num / 2;
	int counter = 0;
	for(int z = 1;z<= m;z++){
		if(num % z == 0){
			counter++;
		}
	}
	return counter;
}
bool palindrome(int num){ // 1551
	int temp = num;
	int sum = 0; // 150
	int d;
	while(num > 0){ // 1
		d = num % 10; //1
		sum=(sum*10) + d; //1
		num /= 10; // num = num / 10;
	}
	if(temp == sum){
		return true;
	} else {
		return false;
	}
}
int main()
{
	int size;
	cin>>size;
	int arr[size]; // 6 5 4 3
	// 0 1 2 3
	// 100 4 5 6
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	cout<<"The maximum number : "<<arr[size - 1]<<endl;
	cout<<"The minimum number : "<<arr[0]<<endl;
	int countPrime = 0;
	int countPalindrome = 0;
	for(int i =0;i<size;i++){
		if(palindrome(arr[i])){
			countPalindrome++;
		}
		int m = arr[i] / 2; // 50
		int flag = 0;
		for(int z = 2;z<= m;z++){
			if(arr[i] % z == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0 && arr[i] != 1)  countPrime++;
	}
	cout<<"The number of prime numbers : "<<countPrime<<endl;
	cout<<"The number of palindrome numbers : "<<countPalindrome<<endl;
	int c;
	int max; // 4
	int index; // 3
	for(int i=0;i<size;i++){ // i = 0, 1,2   // 1 2 5 8
		c = countDivisor(arr[i]); // 4
		if(i == 0){
			max = c;
			index = i;
		} else {
			if(c >= max){
				max = c;
				index = i;
			}
		}
	}
	cout<<"The number that has the maximum number of divisors : "<<arr[index]<<endl;
}
/*
int maxi_fun(int arr[] , int size)
{
    int max_num = arr[0];
    for(int i=1; i<size; i++)
    {
        max_num=max(arr[i] , max_num);
    }
    return max_num;
}
int mini_fun(int arr[] , int size)
{
    int min_num = arr[0];
    for(int i=1; i<size; i++)
    {
        min_num=min(arr[i] , min_num);
    }
    return min_num;
}
int prime_fun(int arr[] , int size)
{
    int flag =0 , count=0;
    for(int i=0 ; i<size; i++)
    {
        for(int j=2 ; j<=arr[i]/2; j++)
        {
            if(arr[i] % j == 0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0 && arr[i] !=1)
        {
            count++;
        }
    }
    return count;
}
int palindrome (int arr[] , int size)
{
    int num , rem , counter=0;
    for(int i=0 ; i<size; i++)
    {
        int sum =0;
        num=arr[i];
        int temp =num;
        while(num > 0)
        {
            rem = num % 10;
            sum = (sum*10) + rem;
            num/=10;
        }
        if(sum == temp)
        {
            counter++;
        }
    }
    return counter;
}
int maxi_div(int brr[] , int size)
{
    int max_div = brr[0];
    for(int i=1; i<size; i++)
    {
        max_div=max(brr[i] , max_div);
    }
    for(int i=0; i<size; i++)
    {
        if(max_div == brr[i])
        {
            return i;
        }
    }

}
int divisor (int arr[] , int size)
{
    int counter=0 , maxi=0 , brr[size];
    for(int i=0 ; i<size; i++)
    {
        int num = arr[i];
        for(int j=1; j<=num; j++)
        {
            if(num % j == 0)
            {
                counter++;
            }
        }
        brr[i]=counter;
        counter=0;
    }
    maxi = maxi_div(brr , size);
    return arr[maxi];
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0 ; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum number : "<<maxi_fun(arr , size)<<endl;
    cout<<"The minimum number : "<<mini_fun(arr , size)<<endl;
    cout<<"The number of prime numbers : "<<prime_fun(arr , size)<<endl;
    cout<<"The number of palindrome numbers : "<<palindrome(arr , size)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<divisor(arr , size)<<endl;
}
*/

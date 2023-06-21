#include <bits/stdc++.h>
using namespace std;

/*
	3 8

	3 30
	4 50
	5 60

*/
int knapSack(int capacity,int weight[],int value [],int items){
	if(capacity == 0 || items == 0){
		return 0;
	}
	if(weight[items - 1] > capacity){
		return knapSack(capacity,weight, value, items-1);
	} else {
		return max (
			value[items-1] + knapSack(capacity-weight[items-1],weight,value,items - 1), // 90
			knapSack(capacity,weight,value,items - 1) // 50 + 30 = 80
		);
	}

}
int main()
{
	int items,capacity;
	cin>>items>>capacity;
	int weight [items];
	int value [items];
	for(int i=0;i<items;i++){
		cin>>weight[i]>>value[i];
	}
	cout<<knapSack(capacity,weight,value,items)<<endl;
}

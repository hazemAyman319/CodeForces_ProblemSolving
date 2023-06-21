#include <iostream>
using namespace std;

int main()
{
    int size , sum_s=0 , sum_d=0, play=0;
    cin>>size;
    int i=0 , j=size-1;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    while(i <= j)
    {
        if(play % 2 == 0)
        {
            if(arr[i] >= arr[j])
            {
                sum_s = sum_s + arr[i];
                i++;
            }
            if(arr[j] >= arr[i])
            {
                sum_s = sum_s + arr[j];
                j--;
            }
        }
        else
        {
            if(arr[i] >= arr[j])
            {
                sum_d = sum_d + arr[i];
                i++;
            }
            if(arr[j]>=arr[i])
            {
                sum_d = sum_d + arr[j-i];
                j--;
            }
        }
        play++;
    }
    cout<<sum_s<<" "<<sum_d;
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , count=0 ;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
              count++;
            }
        }
        printf("%d\t",count);
        count=0;
    }
    return 0;
}

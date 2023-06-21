#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][3],brr[2][3],crr[2][3];
    printf("enter the first matrix 2*3:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
    {
        scanf("%d",arr[i][j]);
    }
    }
    printf("enter the second matrix 2*3:");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
    {
        scanf("%d",brr[i][j]);
    }
    }
    printf("the sum of two matries:");
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<3;j++)
    {
        crr[i][j]=arr[i][j]+brr[i][j];
        printf("%d",crr[i][j]);
    }
    }
    return 0;
}

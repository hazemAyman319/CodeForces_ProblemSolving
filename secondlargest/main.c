#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    printf("enter 10 numbers:");
    int max = array[0];
    int secondL;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(max<array[i])
            secondL=max;
            array[i]=max;
    }
    printf("the second largest:%d",secondL);
    return 0;
}

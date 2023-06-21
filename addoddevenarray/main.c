#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10],sum_odd=0,sum_even=0;
    printf("enter 10 numbers:");
    for(int i=0;i<10;i++)
    {
      scanf("%d",&array[i]);
      if(array[i]%2==0)
      {
          sum_even+=array[i];
      }
      else if(array[i]%2!=0)
      {
          sum_odd+=array[i];
      }
    }
    printf("sum of even:%d\n",sum_even);
    printf("sum of odd:%d",sum_odd);
    return 0;
}

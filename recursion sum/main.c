#include <stdio.h>
#include <stdlib.h>
int sum_func(num)
{
    if(num==0)
     return 0;
    else
     return num + sum_func(num-1);
}
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int result=sum_func(num);
    printf("%d",result);
    return 0;
}

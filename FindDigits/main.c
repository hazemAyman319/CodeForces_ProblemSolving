#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number,temp,count=0;
    printf("enter the number:");
    scanf("%d",&number);
    while(number!=0)
    {
        temp=number%10;
        if(temp!=0 && number%temp==0)
        {
            count++;
            number=number/10;
        }
    }
    printf("%d",count);

    return 0;
}

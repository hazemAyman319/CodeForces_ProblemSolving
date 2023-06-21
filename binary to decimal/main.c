#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int binary,num=0,power=0;
    printf("enter a binary number:");
    scanf("%d",&binary);
    while(binary!=0)
    {
        num=(binary%10)*pow(2,power);
        power++;
        binary/=10;
    }
    printf("%d",num);
    return 0;
}

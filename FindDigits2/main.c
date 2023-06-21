#include <stdio.h>
#include <stdlib.h>
int Find_digits(n)
{
        int count=0;
        int temp=n;
        while(temp>0)
        {
            int d=temp%10;
            if(d!=0 && n%d==0)
            {
                count++;
            }
            temp/=10;
        }
        return count;
}
int main()
{
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    int digits=Find_digits(number);
    printf("%d",digits);
    return 0;
}

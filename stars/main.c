#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ,c ,l=1 ,rows;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(a=1;a<=rows;a++)
    {
        for(b=rows;b>=a;b--)
        {
            printf(" ");
        }
        for(c=1;c<=l;c++)
        {
            printf("*");
        }
        l=l+2;
        printf("\n");
    }
    return 0;
}

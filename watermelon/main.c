#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;
    printf("enter the weight of the watermelon:");
    scanf("%d",&w);
    if(w%2==0&&w>2)
            printf("YES");
        else
            printf("NO");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    char S,Q;
    printf("Enter a mathematical expression in the form A +-* B = C\n");
    scanf("%d%c%d%c%d",&A,&S,&B,&Q,&C);
    if(Q=='=')
    {
        if(S=='+')
        if(A+B==C)
        printf("the expression is correct");
        else
        {
            C=A+B;
            printf("the expression is wrong\n");
            printf("the right expression is %d%c%d=%d",A,S,B,C);
        }

    if(S=='-')
        if(A-B==C)
        printf("the expression is correct");
        else
        {
            C=A-B;
            printf("the expression is wrong\n");
            printf("the right expression is %d%c%d=%d",A,S,B,C);
        }

    if(S=='*')
        if(A*B==C)
        printf("the expression is correct");
        else
        {
            C=A*B;
            printf("the expression is wrong\n");
            printf("the right expression is %d%c%d=%d",A,S,B,C);
        }
    }else
    printf("check the equal sign");

    return 0;
}

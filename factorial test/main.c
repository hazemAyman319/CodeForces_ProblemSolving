#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_cases;
    printf("enter the number of test case:");
    scanf("%d",&test_cases);
    while(test_cases!=0)
    {
    int number , fact=1;
    printf("enter the number:");
    scanf("%d",&number);
     for(int i=1;i<=number;i++)
      {
         fact=fact*i;
      }
        printf("%d\n",fact);
        test_cases--;
    }




    return 0;
}

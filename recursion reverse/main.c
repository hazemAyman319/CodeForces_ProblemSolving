#include <stdio.h>
#include <stdlib.h>
int sum=0,rem;
int revNumFunction(int);
int main(){
   int num,revNum;
   printf("enter number:\n");
   scanf("%d",&num);
   revNum=revNumFunction(num);//calling function to reverse the given number
   printf("the number after reverse :%d",revNum);
   return 0;
}
int revNumFunction(int num){
   if(num){
      rem=num%10;
      sum=sum*10+rem;
      revNumFunction(num/10);
   }
   else
      return sum;
}

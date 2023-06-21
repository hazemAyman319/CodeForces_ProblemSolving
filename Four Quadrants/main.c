#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X_axis , Y_axis;
    printf("Enter the axes coordinates: ");
    scanf("%d%d",&X_axis,&Y_axis);
    if(X_axis>0&&Y_axis>0)
    {
        printf("the point lies at the 1st quadrant");
    }
    else if(X_axis<0&&Y_axis>0)
    {
     printf("the point lies at the 2nd quadrant");
    }
    else if(X_axis>0&&Y_axis<0)
    {
        printf("the point lies at the 4th quadrant");
    }
    else if(X_axis<0&&Y_axis<0)
    {
        printf("the point lies at the 3rd quadrant");
    }
    else if(X_axis==0&&Y_axis==0)
    {
        printf("the point lies at the origin");
    }
    else if(X_axis==0&&Y_axis!=0)
    {
        printf("the point lies at the y-axis");
    }
    else
        printf("the point lies at the x-axis");
    return 0;
}

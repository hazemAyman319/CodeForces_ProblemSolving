#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    Queue q ;
    createQueue(&q);
    entryType item ;
    int choose ;
    printf("1- To Enqueue \n2- To Dequeue \n3- Queue Size \n0- To Exit \n\nEnter Your Choice ");
    scanf("%d" , &choose );
    while(choose != 0)
    {
        switch(choose)
        {
        case 1 :
                scanf("%d" , &item);
                if(!queueFull(&q))
                    enqueue(&q , item );
                else
                    printf("\nSorry Queue is Full !");
            break;

        ////////////////////////////////////////////////////////////

        case 2 :
                if(!queueEmpty(&q))
                {
                    dequeue(&q , &item);
                    printf("\t%d" , item);
                }
                else
                    printf("\nSorry Queue is Empty");
            break;

        ////////////////////////////////////////////////////////////

        case 3 :
                printf("%d" , queueSize(&q));
            break;

        ///////////////////////////////////////////////////////////

        default :
            printf("Invalid Number \n");
        }

        printf("\nEnter Another Choice : ");
        scanf("%d" , &choose);
    }

    return 0;
}

#include "queue.h"

void createQueue(Queue *q)
{
    q->front = 0 ;
    q->rear = -1 ;
    q->size = 0 ;
}

///////////////////////////////////////////

void enqueue(Queue *q , entryType item )
{
    q->rear = (q->rear + 1) % Max ;
    q->Entery[q->rear] = item ;
    q->size++;
}

///////////////////////////////////////////

void dequeue(Queue *q , entryType *item)
{
    *item = q->Entery[q->front] ;
    q->front = (q->front+1) % Max ;
    q->size--;
}

//////////////////////////////////////////

int queueFull(Queue *q)
{
    return q->size == Max;
}
int queueEmpty(Queue *q)
{
    return q->size == 0 ;
}

//////////////////////////////////////////

int queueSize(Queue *q)
{
    return q->size ;
}

//////////////////////////////////////////
int firstEle(Queue *q )
{
    return q->Entery[q->front];
}

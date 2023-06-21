#define Max 20
typedef int entryType;
typedef struct queuee{
        int front;
        int rear;
        int size;
        entryType Entery[Max]
}Queue;

void createQueue(Queue *q) ;
void enqueue(Queue *q , entryType item );
void dequeue(Queue *q , entryType *item);
int queueFull(Queue *q);
int queueEmpty (Queue *q);
int queueSize (Queue *q);

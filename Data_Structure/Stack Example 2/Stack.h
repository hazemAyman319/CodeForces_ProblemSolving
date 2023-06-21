#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100

typedef int entry_type;

typedef struct
{
    int top;
    entry_type entry[MAX];
}Stack;

void push(entry_type,Stack*);
void pop(entry_type*,Stack*);
void create_stack(Stack*);
int is_stack_empty(Stack*);
int is_stack_full(Stack*);
//Q1
int first_element(entry_type,Stack*);
//Q4
int StackSize(Stack*);















#endif // STACK_H_INCLUDED

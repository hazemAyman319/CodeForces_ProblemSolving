#include "Stack.h"

void create_stack(Stack*s)
{
    s->top=0;
}

void push(entry_type item,Stack*s)
{
    s->entry[s->top++]=item;
}

void pop(entry_type*item,Stack*s)
{
    *item=s->entry[--s->top];
}

int is_stack_full(Stack*s)
{
    return(s->top==MAX);
}

int is_stack_empty(Stack*s)
{
    return(s->top==0);
}
// Q1
int first_element(entry_type item,Stack*s)
{
  if(s->top==0)
    return s->entry[item];
}
//Q4
int StackSize(Stack*s)
{
    if(s->top==0)
    {
        return 0;
    }else
    {
    return (s->top);
    }
}

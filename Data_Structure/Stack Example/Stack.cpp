#include "Stack.h"

void CreateStack(Stack *s){
   s->top=0;
}

void Push(StackEntry e, Stack *s){
	s->entry[s->top++]=e;
}

int StackFull(Stack *s){
   if (s->top==MAXSTACK)
	return 1;
   else
	return 0;
}

void Pop(StackEntry *pe, Stack *s){
	*pe=s->entry[--s->top];
}

int StackEmpty(Stack *s){
  return !s->top;
}








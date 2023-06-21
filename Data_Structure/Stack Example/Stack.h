
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAXSTACK 10

typedef int StackEntry ;

typedef struct stack{
	int top;
	StackEntry entry[MAXSTACK];
} Stack;

void	Push		(StackEntry, Stack *);
void	Pop		(StackEntry *, Stack *);
int	    StackEmpty	(Stack *);
int	    StackFull	(Stack *);
void	CreateStack(Stack *);
int F_element(StackEntry , Stack *);
int L_element(StackEntry , Stack *);
void Destroy (Stack *);
int StackSize (Stack *);













#endif // STACK_H_INCLUDED


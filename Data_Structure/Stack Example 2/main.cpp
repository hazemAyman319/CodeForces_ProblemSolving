#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s;
    entry_type x;
    create_stack(&s);

    cin>>x;

    while(!is_stack_full(&s)&& x!=-1)
    {
        push(x,&s);
        cin>>x;
    }
    while(!is_stack_empty(&s))
    {
        pop(&x,&s);
        cout<<x<<endl;
    }

    //Q1
    int y;
    int first_n;
    cin>>y;
    first_n=first_element(y,&s);
    cout<<first_n;
    //Q4
    int Size=StackSize(&s);
    cout<<Size;
    return 0;
}

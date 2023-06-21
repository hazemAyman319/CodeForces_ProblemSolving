#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

using namespace std;
int main()
{
    Stack s ;
    CreateStack(&s) ;
    StackEntry x;

    cin >> x;

    while(!StackFull(&s) && x!= -1 )
    {
        Push(x,&s);
        cin >> x;
    }
    cout << endl;
    while(!StackEmpty(&s))
    {
        Pop(&x,&s) ;
        cout << x << endl;
    }
    return 0;
}

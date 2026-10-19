#include "stack.h"

#define TAM 6

int main () 
{
    Stack *s = create (TAM);

    for (int i = 0; i < TAM; i++) 
    {
        push (s, rand()%10);
    }

    print (s);

    Stack* aux = create (TAM);

    while (!empty (s))
    { 
        int elem = pop(s);

        if (elem % 2 != 0)
        {
            push(aux, elem);
        }        
    }
    

    while (!empty (aux));
    {
        push (s, pop(aux));
    }

    destroy(aux);
    
    print(s);

    destroy (s);

    return 0;
}
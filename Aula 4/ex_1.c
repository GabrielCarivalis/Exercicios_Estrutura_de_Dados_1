#include "list.h"

void print_reverse (List *l)
{
    List* t = l;
    int tamanho = 0;

    while (t != NULL)
    {
        tamanho++;
        t = t -> next;
    }

    for (int i = tamanho - 1; i >= 0; i--)
    {
        t = l;
        for (int j = 0; j < i; j++)
        {
            t = t -> next;
        }
        
        printf("%d ", t -> data);
    }
}

int main ()
{
    List* l = create();

    for (int i = 1; i <= 9; i++)
    {
        l = insert (l, i);
    }

    print(l);

    print_reverse (l);

    destroy (l);
    return 0;
}
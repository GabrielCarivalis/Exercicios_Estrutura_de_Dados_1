#include "list.h"

int sum (List *l)
{
    if (l == NULL)
    {
        return 0;
    } 

    int soma = 0;
        
    return soma = l -> data + sum (l -> next); 
}

int main ()
{
    List* l = NULL;

    for (int i = 1; i <= 9; i++)
    {
        l = insert_back (l, i);
    }

    printf ("sum: %d\n", sum(l));

    return 0;
}
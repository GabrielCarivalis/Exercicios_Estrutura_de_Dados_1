#include "list.h"

List* removek (List *l, int k)
{
    if(l == NULL)
    {
        return l;
    }

    if (l -> data == k)
    {
        l = l -> next;
        return l;
    }

    else
    {
        removek (l -> next, k);
        return l;
    }
}

int main ()
{
    List* l = NULL;

    for (int i = 1; i <= 9; i++)
    {
        l = insert_back (l, i);
    }

    removek (l, 6);
    printf ("Lista l sem k:\n");
    print (l);

    destroy (l);

    return 0;
}
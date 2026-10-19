#include "list.h"

int in (List *l, int k)
{
    if (l == NULL)
    {
        return 0;
    }

    if(l -> data == k)
    {
        return 1;
    }

    return (in (l -> next, k));
}

int main ()
{
    List* l = NULL;

    for (int i = 1; i <= 9; i++)
    {
        l = insert_back (l, i);
    }

    printf ("k pertence a l?: %d\n", in(l, 25));

    destroy (l);

    return 0;
}
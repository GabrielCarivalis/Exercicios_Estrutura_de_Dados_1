#include "list.h"

int size (List *l)
{
    if (l == NULL)
    {
        return 0;
    }

    int size_l = size (l -> next);
    size_l++;

    return size_l;
}

int main ()
{
    List* l = NULL;

    for (int i = 1; i <= 9; i++)
    {
        l = insert_back (l, i);
    }

    printf ("size: %d\n", size(l));

    return 0;
}

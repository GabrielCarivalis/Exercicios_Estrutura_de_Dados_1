#include "list.h"

List* split (List* l, List* x, List* y)
{
    if (l == NULL)
    {
        return l;
    }

    x -> prev -> next = y -> next;

    if (y -> next != NULL)
    {
        y -> next = x -> prev;
    }

    print (l);

    x -> prev = NULL;
    y -> next = NULL;

    return x;
}

int main()
{
    List* l = NULL;

    for (int i = 0; i <= 9; i++)
    {
        l = insert_back (l, i);
    }

    print (l);

    List* x = search (l, 3);
    List* y = search (l, 7);

    List* s = split (l, x, y);

    destroy (l);

    print (s);

    destroy (s);

    return 0;
}
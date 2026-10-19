#include "list.h"

int size (List *l)
{
    int size = 0;

    while (l != NULL)
    {
        size++;
        l = l -> next;
    }

    return size;
}

int main()
{
    List* l = create();

    for (int i = 0; i < 5; i++)
    {
        l = insert (l, i);
    }

    print(l);
    printf("\nsize: %d", size(l));

    return 0;
}
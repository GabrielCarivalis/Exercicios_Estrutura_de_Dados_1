#include "list.h"

List* create_circular (List* l)
{
    if (l == NULL)
    {
        return l;
    }

    List* temp = l;

    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = l;
    l -> prev = temp;

    return l;
}

int main () 
{
    int n = 4;

    List *l = create ();

    for (int i = n; i >= 0; i--) 
    {
    l = insert_front (l, i);
    }

    print (l);

    l = create_circular(l);

    print (l);

    destroy (l);

    return 0;
} 

#include "list.h"

List* insert_back (List* l, int elem)
{
    List* node = (List*) malloc (sizeof (List));
    node -> data = elem;
    node -> next = NULL;
    node -> prev = NULL;

    if (l == NULL)
    {
        return node;
    }

    List* temp = l;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = node;
    node -> prev = temp;

    return l;
}

int main()
{
    List* A = NULL;

    A = insert_back (A, 1);
    A = insert_back (A, 2);
    A = insert_back (A, 3);
    A = insert_back (A, 4);
    A = insert_back (A, 5);

    print (A);

    destroy (A);

    return 0;
}
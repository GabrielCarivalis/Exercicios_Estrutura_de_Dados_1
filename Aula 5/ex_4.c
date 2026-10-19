#include "list.h"

List* merge (List* A, List* B)
{
    List* list_merge = NULL;

    if (A == NULL && B == NULL)
    {
        return NULL;
    }

    else if ((A != NULL &&  B != NULL) && A -> data <= B -> data)
    {
        list_merge = insert_back (list_merge, A -> data);
        list_merge -> next = merge (A -> next, B);
        return list_merge;
    }

    else if ((A!= NULL && B != NULL) && B -> data <= A -> data)
    {
        list_merge = insert_back (list_merge, B -> data);
        list_merge -> next = merge (A, B -> next);
        return list_merge;
    }

    else if ((A == NULL && B != NULL))
    {
        list_merge = insert_back (list_merge, B -> data);
        list_merge -> next = merge (A, B -> next);
        return list_merge;
    }
    
    else if ((A != NULL && B == NULL))
    {
        list_merge = insert_back (list_merge, A -> data);
        list_merge -> next = merge (A -> next, B);
        return list_merge;
    }
}

int main()
{
    List* A = NULL;
    List* B = NULL;

    for (int i = 1; i <= 9; i += 2)
    {
        A = insert_back (A, i);
    }
 
    for (int i = 2; i <= 8; i += 2)
    {
        B = insert_back (B, i);
    }

    printf("Lista A: ");
    print (A);
    printf("Lista B: ");
    print (B);

    List* C = merge (A, B);
    destroy (A);
    destroy (B);

    printf("Lista C: ");
    print (C);
    destroy (C);

    return 0;
}
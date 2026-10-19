#include "list.h"

List* merge (List *A, List *B)
{
    List* C = create();

    while (A != NULL && B != NULL)
    {
        if (A -> data <= B -> data)
        {
            C = insert_back (C, A -> data);
            A = A -> next;
        }

        else
        {
            C = insert_back (C, B -> data);
            B = B -> next;
        }
    }

    
    while (A != NULL)
    {
        C = insert_back (C, A -> data);
        A = A -> next;
    }

    while (B != NULL)
    {
        C = insert_back (C, B -> data);
        B = B -> next;
    }

    return C;
}

int main () {
  int k;

  List *A = NULL, *B = NULL;

  for (k = 10; k >= 0; k -= 2) 
    A = insert (A, k);

  for (k = 19; k >= 0; k -= 2) 
    B = insert (B, k);

  print (A);
  print (B);

  List *C = merge (A, B);

  print (C);
  destroy (C);

  return 0;
}

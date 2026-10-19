#include "list.h"

int sum (List *l) 
{
    int soma = 0;

    while (l != NULL)
    {
        soma += l -> data;
        l = l -> next;
    }

    return soma;
}

int main () {
  int k;

  List *l = NULL;

  for(int i = 1; i <= 9; i++)
  {
    l = insert_back (l, i);
  }

  print (l);

  printf("Sum = %d\n", sum(l));

  destroy (l);

  return 0;
}

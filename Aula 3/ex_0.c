#include "stack.h"

int parser (char *c) {

  Stack *pilha = create(strlen(c));
  int i = 0;

  while(c[i] != '\0')
  {
    if (c[i] == '(' || c[i] == '[')
    {
      push (pilha, c[i]);
    }

    else if(c[i] == ')')
    {
      if(!empty(pilha))
      {
        if(pop(pilha) != '(')
        {
          return 0;
        }
      }

      else
      {
        return 0;
      }
    }

    else if(c[i] == ']')
    {
      if(!empty(pilha))
      {
        if(pop(pilha) != '[')
        {
          destroy(pilha);
          return 0;
        }
      }

      else
      {
        destroy (pilha);
        return 0;
      }
    }

    i++;
  }
  
  if(empty(pilha))
  {
    destroy (pilha);
    return 1;
  }

  destroy (pilha);
  return 0;
}

int main () {
  char *strings[] = {
    "( ( ) [ ( ) ] )",
    "( ( [ ] ) )",
    "( ) [ ]",
    "( [ ]",
    ") ("
  };

  int n = 5;

  for (int i = 0; i < n; i++) {
    char *c = strings[i];

    if (parser(c))
      printf("\"%s\" -> true  (bem formada)\n", c);
    else
      printf("\"%s\" -> false (mal formada)\n", c);
  }

  return 0;
}

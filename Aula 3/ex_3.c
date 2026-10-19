#include "stack.h"

int compute_polish_expression (char *c) {
  Stack *s = create(strlen(c));
  int i = 0;

  int a, b;

  while (c[i] != '\0')
  {
    if (c[i] == '+')
    {
      b = pop(s);
      a = pop(s);
      push (s, a + b);
    }  

    else if (c[i] == '-')
    {
      b = pop(s);
      a = pop(s);
      push (s, a - b);
    }

    else if (c[i] == '*')
    {
      b = pop(s);
      a = pop(s);
      push (s, a * b);
    }

    else if (c[i] == '/')
    {
      b = pop(s);
      a = pop(s);
      push (s, a / b);
    }

    else if (c[i] != ' ')
    {
      push (s, c[i] - '0');
    }

    i++;
  }

  int resultado = pop(s);

  destroy(s);
  return resultado;
}

int main () {
  char *c1 = "9 0 1 + 2 3 * * +";   /* esperado: 15 */
  char *c2 = "8 2 - 1 3 + *";       /* esperado: 24 */
  char *c3 = "6 2 / 3 +";           /* esperado: 6  */
  char *c4 = "4 5 + 2 3 * -";       /* esperado: 3  */

  printf("%s = %d\n", c1, compute_polish_expression(c1));
  printf("%s = %d\n", c2, compute_polish_expression(c2));
  printf("%s = %d\n", c3, compute_polish_expression(c3));
  printf("%s = %d\n", c4, compute_polish_expression(c4));

  return 0;
}
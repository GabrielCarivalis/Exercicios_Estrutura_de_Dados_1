#include "queue.h"
#include <stdlib.h>

#define TAM 10

int main ()
{
    Queue* positivos = create(TAM);
    Queue* negativos = create(TAM);

    int contador = 0;

    while(!full(positivos) || !full(negativos))
    {
        int num = rand()%19 - 9;

        if (num > 0 && !full(positivos))
        {
            enqueue (num, positivos);
        }

        else if (num < 0 && !full(negativos))
        {
            enqueue (num, negativos);
        }

        else if (num == 0)
        {
            contador++;
        }
    }

    print(positivos);
    print(negativos);
    printf("qtd de zeros: %d", contador);

    destroy(positivos);
    destroy(negativos);

    return 0;
}
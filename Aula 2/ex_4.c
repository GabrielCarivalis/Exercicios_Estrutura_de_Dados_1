#include "queue.h"
#include <stdlib.h>

#define NUMEROS 9
#define CARRETEL 3

int main()
{
    Queue* fila1 = create (NUMEROS + 1);
    Queue* fila2 = create (NUMEROS + 1);
    Queue* fila3 = create (NUMEROS + 1);

    for (int i = 1; i < NUMEROS + 1; i++)
    {
        enqueue (i, fila1);
        enqueue (i, fila2);
        enqueue (i, fila3);
    }

    int ganhou = 0;

    while (!ganhou)
    {
        int giros1 = rand()%NUMEROS + 1;
        int giros2 = rand()%NUMEROS + 1;
        int giros3 = rand()%NUMEROS + 1;

        for (int i = 0; i < giros1; i++)
        {
            enqueue (dequeue(fila1), fila1);
        }

        for (int i = 0; i < giros2; i++)
        {
            enqueue (dequeue(fila2), fila2);
        }       
        
        for (int i = 0; i < giros3; i++)
        {
            enqueue (dequeue(fila3), fila3);
        }

        printf ("%d\t", fila1 -> array[fila1->front]);
        printf ("%d\t", fila2 -> array[fila2->front]);
        printf ("%d\t\n", fila3 -> array[fila3->front]);

        if (fila1->array[fila1->front] == fila2->array[fila2->front] && fila2->array[fila2->front] == fila3->array[fila3->front])
        {
            printf("Ganhou!!!\n");
            ganhou = 1;
        }
    }

    destroy(fila1);
    destroy(fila2);
    destroy(fila3);

    return 0;
}
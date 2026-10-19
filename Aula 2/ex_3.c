#include "queue.h"

#define PESSOAS 5
#define PASSOS 3

int main()
{
    Queue* fila = create (PESSOAS + 1);

    for (int i = 1; i <= PESSOAS; i++)
    {
        enqueue (i, fila);
    }

    print(fila);

    while (!empty(fila))
    {
        for (int j = 0; j < PASSOS -1; j++)
        {
            int e = dequeue(fila);
            enqueue((e) % (PESSOAS + 1), fila);
        }


        dequeue(fila);  
        print(fila);
    }

    destroy(fila);

    return 0;
}
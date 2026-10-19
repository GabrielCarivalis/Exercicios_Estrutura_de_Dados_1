#include "queue.h"
#include <stdlib.h>

#define TAM 5

int main ()
{
    Queue* par = create(TAM);
    Queue* impar = create(TAM);

    while (!full(par) || !full(impar))
    {
        int num = rand()%10;

        if(num % 2 == 0 && !full(par))
        {
            enqueue (num, par);
        }

        else if(num % 2 != 0 && !full(impar))
        {
            enqueue (num, impar);
        }
    }

    print(par);
    print(impar);


    destroy(par);
    destroy(impar);
    
    return 0;
}
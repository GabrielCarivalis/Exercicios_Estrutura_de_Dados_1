#include "list.h"

int position (List *l, int k)
{
    if (l == NULL)
    {
        return -1;

    }

    else if (l -> data == k)
    {
        k = 0;
        return 0;
    }

    else
    {
        int i = position (l->next, k);

        if(i == -1)
        {
            return -1;
        }

        i++;
        return i;
    }
}

int main()
{
    List *l = NULL;

    l = insert_back (l , 5);
    l = insert_back (l , 6);
    l = insert_back (l , 7);
    l = insert_back (l , 8);
    l = insert_back (l , 9);
    l = insert_back (l , 4);
    l = insert_back (l , 3);
    l = insert_back (l , 2);
    l = insert_back (l , 1);
    l = insert_back (l , 0);

    print(l);

    printf("\n%d\n", position (l, 10));

    return 0;
}
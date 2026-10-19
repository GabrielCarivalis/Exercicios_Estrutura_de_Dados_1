int max_itr (List *l)
{
    List* temp = l;

    if (l == NULL)
    {
        return NULL;
    }

    int maior = l -> data;

    while (temp != NULL)
    {
        if (temp -> data >= maior)
        {
            maior = temp -> data
        }

        temp = temp -> next;
    }

    return maior;
}
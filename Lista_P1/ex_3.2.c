int max_rec (List* l)
{
    if (l == NULL)
    {
        return -9999;
    }

    if (l -> next == NULL)
    {
        return l -> data;
    }

    int maior = max_rec (l -> next);

    if (maior >= l -> data)
    {
        return maior;
    }

    return l -> data;
}
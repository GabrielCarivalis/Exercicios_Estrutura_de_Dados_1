List* remove_all (List*l, int k)
{
    if (l == NULL)
    {
        return NULL;
    }

    l -> next = remove_all (l -> next, k);

    if (l -> data == k)
    {
        List* t = l;
        t = l -> next; 
        free (l);
        return t;
    }

    return l;
}
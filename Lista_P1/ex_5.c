Stack* push (Stack* l, int elem)
{
    List* node = (List*) malloc (sizeof (List));
    node -> data = elem;
    node -> prev = NULL;

    if (l == NULL)
    {
        node -> next = NULL;
        return node;
    }

    node -> next = l;
    l -> prev = node;

    return node;
}

Stack* pop (Stack* l)
{
    if (l == NULL)
    {
        return NULL;
    }

    Stack* temp = l;
    l = l -> next;

    if (l != NULL)
    {   
        l -> prev == NULL;
    }

    free (temp;)

    return l;
}

int peek (Stack *l)
{
    if (l == NULL)
    {
        return NULL;
    }

    return l -> data;
}

int empty (Stack* l)
{
    if (l == NULL)
    {
        return 1;
    }

    return 0;
}
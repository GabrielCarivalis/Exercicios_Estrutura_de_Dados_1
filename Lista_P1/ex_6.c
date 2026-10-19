void enqueue (Stack *p, int elem)
{
    push (p, elem);
}

int dequeue (Stack *p)
{
    Stack* aux = create (get_size(p));

    while (!empty(p))
    {
        push (aux, pop (p));
    }

    int elem = pop(aux);

    while (!empty(aux))
    {
        push (p, pop(aux));
    }

    return elem;
}
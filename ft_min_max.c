//this version pushes the min to b and pushes everything back to a as someone suggested
//in theory min_max brings the min to the top using the sa operation, which might prove more or less efficient, I'm not sure
//Should we leave it like this, do the other way, do both?
//THIS IS STILL TO BE TESTED

static void *ft_find_min(s_stack stack)
{
    s_stack tmp_stack;
    void    *return_address;
    int tmp_max;
    int i;

    if (stack == NULL)
    tmp_stack = stack;
    return_address = NULL;
    tmp_max = tmp_stack->content;
    i = 1;
    while (i < ft_lstsize(tmp_stack))
    {
        tmp_stack = tmp_stack->next;
        if (tmp_stack->content > tmp_max)
            tmp_max = tmp_stack->content;
            return_address = tmp_stack;
        i++;
    }
    return (return_address);
}

void    ft_min_max(s_stack stack_a, s_stack stack_b)
{
    if (stack == NULL)
        //ERROR
    while (ft_lstsize(stack_a) > 1)
    {
        ft_display(pb(ft_find_min(stack_a), stack_b));
    }
    ft_display(pb(stack_a, stack_b));
    while (ft_lstsize(Stack_b) > 1)
    {
        ft_display(pb(stack_a, stack_b));
        ft_display(rb(stack_b));
    }
    ft_display(pb(stack_a, stack_b));
}
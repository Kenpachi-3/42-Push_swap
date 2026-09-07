void    *ft_find_min_or_max(s_stack stack, char *s)
{
    s_stack tmp_stack;
    void    *return_address;
    int tmp_val;
    int i;

    if (stack == NULL || (s != "min" && s != "max"))
        error_exit();
    tmp_stack = stack;
    return_address = NULL;
    tmp_val = tmp_stack->content;
    i = 1;
    while (i < ft_lstsize(tmp_stack))
    {
        tmp_stack = tmp_stack->next;
        if (s == "max")
        {
            if (tmp_stack->content > tmp_max)
            {
                tmp_val = tmp_stack->content;
                return_address = tmp_stack;
            }
        }
        else
        {
            if (tmp_stack->content < tmp_min)
            {
                tmp_val = tmp_stack->content;
                return_address = tmp_stack;
            }
        }
        i++;
    }
    return (return_address);
}
void    ft_adaptive(float disorder, s_stack stack_a, s_stack stack_b)
{
    if (disorder < 0 || disorder > 1 || stack_a == NULL || stack_b == NULL)
        error_exit();
    if (disorder < 0.2)
        ft_min_max(a, b);
    else if (disorder <= 0.2 && disorder < 0.5)
        //
    else
        ft_radix(stack_a, stack_b);
    return();
}
void    ft_print_stack_content(s_stack stack)
{
    int i;
    s_stack tmp_stack;

    i = 0;
    tmp_stack = stack;
    printf("Stack:\n");
    while (i < ft_lstsize(stack))
    {
        printf("%d\n", tmp_stack->content);
        tmp_stack = tmp_stack->next;
    }
    printf("\n");
}
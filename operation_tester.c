//Just for us
void ft_operation_tester(s_stack stack_a, s_stack stack_b)
{
    int repeat;
    char    *s;

    repeat = 1;
    s = 0;
    while (repeat)
    {
        printf("Operation: ";)
        scanf("%d", &s);
        printf("\n");
        if (s == "sa")
            sb(stack_b);
        else if (s == "sb")
            sb(stack_b);
        else if (s == "ss")
            ss(stack_a, stack_b);
        else if (s == "pa")
            pa(stack_a, stack_b);
        else if (s == "pb")
            pb(stack_a, stack_b);
        else if (s == "ra")
            ra(stack_a);
        else if (s == "rb")
            ra(stack_b);
        else if (s == "rr")
            rr(stack_a, stack_b);
        else if (s == "rra")
            rra(stack_a);
        else if (s == "rrb")
            rrb(stack_b);
        else if (s == "rrr")
            rrr(stack_a, stack_b);
        printf("Stack A\n");
        ft_print_stack_content(stack_a);
        printf("Stack B\n");
        ft_print_stack_content(stack_b);
        printf("\n\nDo you want to try again? 0 no, 1 yes; no other values\nRepeat = ");
        scanf("%d", &repeat);
    }
}
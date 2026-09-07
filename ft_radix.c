//the counting_sort -recommended online- still has to be implemented

void    ft_radix(s_stack stack_a, s_stack stack_b)
{
    int i;
    int max;
    s_stack tmp_stack;
    
    i = 0;
    max = ft_find_min_or_max(stack_a, "max");
    max = ft_digit_counter(max);
    tmp_stack = NULL;
    while (i < max)
    {
        //tmp_stack = ft_lst_map(stack_a, ft_get_digit());
        //recommended sorting algorithm
        //counting_sort (ft_lst_map(stack_a, ft_get_digit(int n, i) ) )

        /*
            counting_sort could have stack and tmp with tmp = stack
            then stack undergoes ft_get_digit via ft_lst_map
            then counting_sort scans through tmp and changes stack
            with a "digit" variable equal to zero the whole number is evaluated, with a digit != 0 only that digit is taken into account
            the (*f) parameter of ft_lst_map is set to ft_get_digit if necessary for radix, otherwise a function that does nothing (returns the same value) is passed
        */
    }
}
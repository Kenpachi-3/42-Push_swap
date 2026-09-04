void swap(s_stack stack){
    void    *tmp;
    tmp = stack->content,
    stack->content = stack->next->content;
    stack->next->content = tmp;
//would have to check whether ->next moves the pointer forward or not, so does if stack is 1 and stack next is 2, in the fourth row is the pointer still at 1 or is at 2? meaning, in line 5 is the pointer then at 2 as it should, or is it at 3?
}
//what about adding a swap function in libft? like ft_lstswap(node1, node2)

char *sa(s_stack stack_a){
    swap(stacks_a);
    return ("sa");
}

void sb(s_stack stack_b){
    swap(stacks_b);
    return ("sb");
}

void ss(s_stack stack_a, s_stack stack_b){
    swap(stack_a);
    swap(stack_b);
    return ("ss");
}

void push(s_stack stack_a, s_stack stack_b, int i)
{
//pa
    if (i == 1)
    {
//creates a new node copying the first node in b, then adds it to the front of a, then deletes the original first node of b
        ft_lstadd_front(stack_a, ft_lstnew(stack_b));
        ft_lstdelone(stack_b);
//by doing this, is the address of the former second element (now first, theoretically) lost? can the stack still be accessed after lstdelone?
    }
//pb
    else if (i == -1)
    {
        ft_lstadd_front(stack_b, ft_lstnew(stack_a));
        ft_lstdelone(stack_a);
    }
}
//in the end, is this push really necessary, given that it requires an if condition with an additional variable? What about doing just pa and pb?

void pa(s_stack stack_a, s_stack stack_b){
    push(stack_a, stack_b 1);
    return ("pa");
}

void pb(s_stack stack_a, s_stack stack_b){
    push(stack_a, stack_b, - 1);
    return ("pb");
}

void rotate(s_stack stak, int i)
{
    void    *tmp;
    //stacks, i = 1 rotate, i = -1 reverse
    if(i == 1)
    {
        tmp = stack->content;
        //what should I do first? Need to check by testing
        //first possibility
        ft_lstadd_front(stack->next, ft_lstlast(stack));
        ft_lstdelone(ft_lstlast(stack));
        //second possibility
        stack->content = ft_lstlast(stack)->content; //does this work, tho?
        ft_lstlast(stack)->content = tmp;
        //again, doing lstlast does it actually move the pointer or not?
        //check in the code for libft
    }
    else if (1 == -1)
    {

    }
}
//again, what about writing a libft rotate function? or unpacking the different rotate functions? would it cleaner in the end?

void ra(s_stack stack_a){
    rotate(stack_a, 1);
    return ("ra");
}

void rb(s_stack stack_b){
    rotate(stack_b, 1);
    return ("rb");
}

void rr(s_stack stack_a, s_stack stack_b){
    rotate(stack_a, 1);
    rotate(stack_b, 1);
    return ("rr");
}

void rra(s_stack stack_a){
    rotate(stack_a, -1);
    return ("rra");
}

void rrb(s_stack stack_b){
    rotate(stack_b, -1);
    return ("rrb");
}

void rrr(s_stack stack_a, s_stack stack_b){
    rotate(stack_a, -1);
    rotate(stack_b, -1);
    return ("rrr");
}
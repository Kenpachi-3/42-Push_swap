void swap(s_stack stack){
    void    *tmp;
    tmp = stack->content,
    stack->content = stack->next->content;
    stack->next->content = tmp;
//would have to check whether ->next moves the pointer forward or not, so does if stack is 1 and stack next is 2, in the fourth row is the pointer still at 1 or is at 2? meaning, in line 5 is the pointer then at 2 as it should, or is it at 3?
}
//what about adding a swap function in libft? like ft_lstswap(node1, node2)

void sa(){
    swap(stacks->a);
}

void sb(){
    swap(stacks->b);
}

void ss(){
    swap(stacks->a);
    swap(stacks->b);
}

void push(s_stack stacks, int i)
{
//pa
    if (i == 1)
    {
//creates a new node copying the first node in b, then adds it to the front of a, then deletes the original first node of b
        ft_lstadd_front(stacks->a, ft_lstnew(stacks->b));
        ft_lstdelone(stacks->b);
//by doing this, is the address of the former second element (now first, theoretically) lost? can the stack still be accessed after lstdelone?
    }
//pb
    else if (i == -1)
    {
        ft_lstadd_front(stacks->b, ft_lstnew(stacks->a));
        ft_lstdelone(stacks->a);
    }
}
//in the end, is this push really necessary, given that it requires an if condition with an additional variable? What about doing just pa and pb?

void pa(){
    push(stacks, 1);
}

void pb(){
    push(stacks, - 1);
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

void ra(){
    rotate(stacks->a, 1);
}

void rb(){
    rotate(stacks->b, 1);
}

void rr(){
    rotate(stacks->a, 1);
    rotate(stacks->b, 1);
}

void rra{
    rotate(stacks->a, -1);
}

void rrb{
    rotate(stacks->b, -1);
}

void rrr{
    rotate(stacks->a, -1);
    rotate(stacks->b, -1);
}
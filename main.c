#include "libft.h";

int main(int argc, char **argv)
{
    s_stack stack;
    s_stack tmp;
    int i;

    ft_make_stack(stack, argv);
    i = 0;
    tmp = stack;
    while (i < ft_lstsize(tmp))
    {
        printf("%d\n", tmp->content);
        tmp = tmp->next;
    }
    return (0);
}
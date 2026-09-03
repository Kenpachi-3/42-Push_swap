float ft_disorder_metric(s_stack a)
{
    int mistakes;
    int total_pairs;
    int *tmp_fixed;//   points to a node, against which the following nodes are compared
    int *tmp_changing;//    points to a node after the "fixed" one

    mistakes = 0;
    total_pairs = 0;
    tmp_fixed = a;
    tmp_changing = 0;// NECESSARY?
    //while the main node is not the last
    while (tmp_fixed != ft_lstlast(a))
    {
        //initialize the contrasting node as the main node
        tmp_changing = tmp_fixed;
        //while there are still nodes to compare after this one
        while (tmp_changing->next)
        {
            total_pairs += 1;
            tmp_changing = tmp_changing->next;
            if (tmp_fixed->content > tmp_changing->content)
                mistakes += 1;
        }
        tmp_fixed = tmp_fixed->next;
    }
    return (mistakes / total_pairs);
}
/*
{
    //calculate disorder: subject suggests
    //every pair where bigger before smaller -> +1
    //then disorder = disordered_pairs / total_pairs
    //return disorder
    return ( / float that expresses disorder / );
}
*/
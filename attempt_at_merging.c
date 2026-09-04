//STILL IN PROGRESS
//STILL IN PROGRESS
//STILL IN PROGRESS

//CHECKER
//CHECHER
//CHECKER

#include "checker.h"

int is_valid_int(char *str)
{ 
    int i = 0;

    int start;

    if (str == NULL)
        return(0);
    if (str[0] == '\0')
        return(0);
    if (str[i] == '+' || str[i] == '-')
        i++;
    start = i;
    while (str[i] >= '0' && str[i] <= '9')
       {
        i++;
       }
    if (i == start)
       return(0);
    if (str[i] != '\0' && str[i] != ' ')
            return(0);
        return(1); 
}

//FT_MAKE_STACK
//FT_MAKE_STACK
//FT_MAKE_STACK

#include "libft.h"

static void	ft_make_stack(s_stack stack, char *arr){	//arr is the array taken from the argv, with numbers in char, to be converted to int
	int	*tmp;
	
	*stack = ft_lstnew(ft_atoi(arr));
	arr++;//MOVE FORWARD a number of steps equal to the number of digits of the input number
	while (arr)
	{
		tmp = ft_lstnew(atoi(arr));
		ft_lstadd_back(stack, tmp);
		//these two could be in just one line but perhaps this is clearer
		arr++;
	}
}

//IS_INT_OVERFLOW
//IS_INT_OVERFLOW
//IS_INT_OVERFLOW

#include <limits.h>
#include "checker.h"

int is_int_overflow(long n)
{
    if (n > INT_MAX || n < INT_MIN)
        return(0);
    else 
        return(1);
}

//PARSE_INT
//PARSE_INT
//PARSE_INT

#include "checker.h"

int parse_int(char *str)
{
    if (!is_valid_int(str))
        error_exit();
    long    l = ft_atol(str);
    if (is_int_overflow(l) != 1)
        error_exit();
    return(l);
}

//STILL IN PROGRESS
//STILL IN PROGRESS
//STILL IN PROGRESS
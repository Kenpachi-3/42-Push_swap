/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpresti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 19:55:38 by fpresti           #+#    #+#             */
/*   Updated: 2026/08/08 20:09:33 by fpresti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int count;

	if (n != 0)
	{
		if (n < 0)
		{
			count++;
			n *= -1;
		}
		while (n > 0)
		{
			count++;
			n /= 10;
		}
		return (count);
	}
	return (1);
}

static void	ft_make_stack(s_stack stack, char *arr)
{	//arr is the array taken from the argv, with numbers in char, to be converted to int
	char	*tmp_arr;
	int	*tmp_int;
	int	num;
	int	i;
	
	tmp_arr = arr;
	tmp_arr++;
	num = atoi(tmp_arr);
	*stack = ft_lstnew(num);
	num = ft_digit_count(n);
	i = 0;
	while (i < num && tmp_arr)
	{
		tmp_arr++;
	}
//	arr += num;//MOVE FORWARD a number of steps equal to the number of digits of the input number
	while (tmp_arr)
	{
		num = atoi(tmp_arr);
		tmp_int = ft_lstnew(num);
		ft_lstadd_back(stack, tmp_int);//fix num = digit add to arr
		//these two could be in just one line but perhaps this is clearer
		i = 0;
		while (i < num && tmp_arr)
		{
			tmp_arr++;
		}
	}
}

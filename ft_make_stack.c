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

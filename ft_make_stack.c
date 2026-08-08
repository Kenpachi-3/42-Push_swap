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

static void	ft_make_stack(s_stack stack){
	*stack = ft_lstnew( /* int* */);
	while (/* condition */)
	{
		tmp = ft_lstnew( /* int* */ );
		ft_lstadd_front(stack, tmp);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 19:57:56 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/26 17:09:33 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

long ft_atol(char *str)
{
    int sign = 1;
    long result = 0; // use long long instead of long
    int i = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++; 
    }
    else if (str[i] == '+')
    {
       sign = 1;
        i++; 
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
        return(result * sign);
}

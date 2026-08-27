/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 21:38:59 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/26 17:08:48 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
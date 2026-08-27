/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int_overflow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 21:03:57 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/26 17:08:56 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "checker.h"

int is_int_overflow(long n)
{
    if (n > INT_MAX || n < INT_MIN)
        return(0);
    else 
        return(1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 21:06:17 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/25 19:50:13 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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


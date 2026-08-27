/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 21:06:11 by ntshuma           #+#    #+#             */
/*   Updated: 2026/08/26 17:11:30 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int is_valid_int(char *str);
int is_int_overflow(long n);
int parse_int(char *str)
long ft_atol(char *str);
void error_exit(void);

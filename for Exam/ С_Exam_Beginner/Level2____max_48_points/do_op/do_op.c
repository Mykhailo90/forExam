/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 11:50:52 by exam              #+#    #+#             */
/*   Updated: 2017/01/24 12:37:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		calc(int a, char c, int b)
{
	if (c == '+')
		return (a + b);
	if (c == '-')
		return (a - b);
	if (c == '*')
		return (a * b);
	if (c == '/')
		return (a / b);
	if (c == '%')
		return (a % b);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d", calc(atoi(argv[1]), argv[2][0], atoi(argv[3])));
	write(1, "\n", 1);
	return (0);
}

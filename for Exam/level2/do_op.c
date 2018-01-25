/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:04:44 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/23 18:32:25 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void			count_res(int num1, int num2, char o)
{
	if (o == '+')
		printf("%d\n", num1 + num2);
	else if (o == '-')
		printf("%d\n", num1 - num2);
	else if (o == '*')
		printf("%d\n", num1 * num2);
	else if (o == '/')
		printf("%d\n", num1 / num2);
	else if (o == '%')
		printf("%d\n", num1 % num2);
}

int				main(int argc, char **argv)
{
	int			num1;
	int			num2;
	char		operator;

	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		num1 = atoi(&argv[1][0]);
		num2 = atoi(&argv[3][0]);
		operator = argv[2][0];
		count_res(num1, num2, operator);
	}
	return (0);
}

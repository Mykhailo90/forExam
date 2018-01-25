/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 15:51:01 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/25 17:06:25 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			is_prime(int nb)
{
	int		i;
	int		f;

	f = 0;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			flag = 1;
		i++;
	}
	if (flag)
		return (1);
}

int			fprime(int nb)
{
	int		i;

	i = 1;
	while (i < nb)
	{
		if (is_prime(i) && (nb % i == 0))
			printf("%d", i);
	}
	return (0);
}

int			main(int argc, char **argv)
{
	int		input_number;

	if (argc != 2)
		printf("\n");
	else
	{
		input_number = atoi(argv[1]);
		if (input_number == 1)
			printf("1\n");
		else if (input_number == 0)
			printf("0\n");
		else
			fprime(input_number);
	}
	return (0);
}

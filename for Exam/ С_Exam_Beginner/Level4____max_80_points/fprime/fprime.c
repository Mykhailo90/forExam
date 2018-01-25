/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:02:35 by exam              #+#    #+#             */
/*   Updated: 2017/02/28 10:43:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		f_prime(int i)
{
	int j;

	while (1)
	{
		j = 1;
		while (++j <= i)
		{
			if (i % j == 0)
			{
				i /= j;
				printf("%d", j);
				break ;
			}
		}
		if (i != 1)
			printf("*");
		else
			break ;
	}
}

int			main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("\n");
		return (0);
	}
	if (atoi(av[1]) == 1)
	{
		printf("1\n");
		return (0);
	}
	if (atoi(av[1]) == 0)
	{
		printf("0\n");
		return (0);
	}
	f_prime(atoi(av[1]));
	printf("\n");
	return (0);
}

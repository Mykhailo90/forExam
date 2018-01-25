/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:09:44 by exam              #+#    #+#             */
/*   Updated: 2017/01/31 12:21:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		calc(int a, int b)
{
	int temp;

	temp = 0;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	temp = b;
	while (!(a % temp == 0 && b % temp == 0))
		temp--;
	return (temp);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", calc(atoi(argv[1]), atoi(argv[2])));
	else
		printf("\n");
	return (0);
}

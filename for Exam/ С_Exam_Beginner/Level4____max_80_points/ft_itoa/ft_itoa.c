/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:33:15 by exam              #+#    #+#             */
/*   Updated: 2017/02/04 19:49:51 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_int(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int				size;
	char			*ar;
	int				i;
	unsigned int	tea;

	tea = nbr < 0 ? -nbr : nbr;
	i = 0;
	size = nbr > 0 ? count_int(tea) : count_int(tea) + 1;
	printf("size %d:\n", size);
	ar = (char*)malloc(sizeof(char) * size);
	if (nbr < 0)
		ar[i] = '-';
	i = size;
	ar[i--] = '\0';
	while (tea > 10)
	{
		ar[i--] = (tea % 10) + '0';
		tea = tea / 10;
	}
	ar[i] = tea + '0';
	return (ar);
}

int main(void)
{
	int n = -0;
	printf("\n%d\n", n);
	printf("---------------------------------------\n");
	printf("%s\n", ft_itoa(n));
}

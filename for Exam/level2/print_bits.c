/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:50:06 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 18:18:44 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int		count(unsigned char octet)
{
	unsigned char i;

	i = octet;
	if (i / 2 != 0)
		count(i / 2);
	ft_putchar(i % 2 + '0');
	return (-1);
}

void	print_bits(unsigned char octet)
{
	count(octet);
}

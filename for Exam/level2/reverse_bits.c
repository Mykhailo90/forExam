/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:29:45 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 19:47:42 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int n;
	int arg_numb [8];
	int arg_count [] = {128, 64, 32, 16 ,8, 4, 2, 1};
	unsigned char	res;

	n = 0;
	res = 0;
	i = octet;
	while (i / 2 != 0)
	{
		arg_numb[n] = i % 2;
		n++;
		i = i / 2;
	}
	arg_numb[n] = i % 2;
	n = 0;
	while (n < 8)
	{
		if (arg_numb[n] == 1)
			res += arg_count[n];
		n++;
	}
	return res;
}

int main(void)
{
	printf("%d", (int)reverse_bits(10));
	return (0);
}

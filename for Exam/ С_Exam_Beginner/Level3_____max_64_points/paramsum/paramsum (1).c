/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 19:10:52 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/23 19:25:16 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putnbr(int i)
{
	char c;

	if (i < 10)
    {
        c = i + '0';
        write(1, &c, 1);
        return (0);
    }
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	c = i + '0';
	write(1, &c, 1);
	return (0);
}

int main(int argc ,char **argv)
{
	if (argc < 2)
		write(1,"0\n", 2);
	else
	{
		ft_putnbr(argc - 1);
		write(1,"\n",1);
	}
	return (0);
}

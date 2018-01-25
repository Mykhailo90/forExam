/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:33:10 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/13 19:08:15 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_getnbr(char* argv)
{
    int i;
    int num;

    i = 0;
    num = 0;
    while (argv)
    {
		if (argv[i] <= '9' && argv[i] >= '0')
		{
			num += (argv[i] - '0');
			if (argv[i + 1] <= '9' && argv[i + 1] >= '0')
				num *= 10;
			if (!(argv[i + 1] <= '9' && argv[i + 1] >= '0'))
				return(num);
		}
		i++;
    }
    return (num);
}

int ft_putnbr(int t)
{
	char c;

	if (t >= 10)
		ft_putnbr(t / 10);
	if (t >= 10)
	  c = t % 10 + '0';
	else
	  c = t + '0';
	write(1, &c, 1);
	return (0);
}

int ft_prime(int i, int j, int t)
{
	if (i >= 2)
        t += 2;
    if (i == 1)
        t += 1;
    if (i > 2)
    {
        while ( i != 1)
        {
            if (i % j == 0 && i == j)
            {
                t+= i;
                j = 1;
                i--;
            }
            if (i % j == 0 && i != j)
            {
                i--;
                j = 1;
            }
            j++;
        }
    }
	return (t);
}

int main(int argc, char** argv)
{
	if(argc != 2 || argv[1][0] == '-')
	{
		write(1,"0\n",2);
		return (0);
	}
	ft_putnbr(ft_prime(ft_getnbr(argv[1]),2,0));
	return (0);
}

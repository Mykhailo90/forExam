/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 10:55:44 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/25 10:56:51 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			my_atoi(char *str)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += (str[i] - '0');
		i++;
	}
	return (res);
}

int			count_res(int n, int max)
{
	int		flag;
	int		i;

	flag = 0;
	i = 3;
	if (max < 3)
		return (0);
	while (i * i <= max)
	{
		if (n % i == 0)
			flag = 1;
		i++;
	}
	return ((flag) ? (0) : (n));
}

int			put_nbr(int res)
{
	if (res >= 10)
		put_nbr(res / 10);
	if (res >= 10)
		ft_putchar(res % 10 + '0');
	else
		ft_putchar(res + '0');
	return (0);
}

int			main(int argc, char **argv)
{
	int		numb;
	int		i;
	int		res;

	if (argc != 2 || (argv[1][0] < '0' || argv[1][0] > '9'))
		write(1, "0\n", 2);
	else
	{
		i = 3;
		numb = my_atoi(argv[1]);
		res = (numb < 2) ? 0 : 2;
		while (i <= numb)
		{
			if (i % 2 == 0)
				;
			else if (i < 9 && (i % 2 == 1))
				res += i;
			else
				res += count_res(i, numb);
			i++;
		}
		put_nbr(res);
		write(1, "\n", 1);
	}
	return (0);
}

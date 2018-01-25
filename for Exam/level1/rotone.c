/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 15:06:29 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/23 15:21:47 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				ft_putchar(argv[1][i] - 25);
			else if ((argv[1][i] >= 'a' && argv[1][i] <= 'y') ||
					(argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
				ft_putchar(argv[1][i] + 1);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

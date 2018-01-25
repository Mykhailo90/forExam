/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 20:10:06 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 20:52:52 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int		input(char ch, char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int		input_all(char ch, char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (!input(argv[1][i], &argv[1][0], i))
				ft_putchar(argv[1][i]);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
            if (!input_all(argv[2][i], &argv[1][0]) &&
				!input(argv[2][i], &argv[2][0], i))
				ft_putchar(argv[2][i]);
			i++;
        }		
		write(1, "\n", 1);
	}
	return (0);
}

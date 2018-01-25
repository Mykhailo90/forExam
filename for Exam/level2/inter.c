/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 13:18:40 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 15:22:51 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		input(char ch, char *str)
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

int		input_s(char ch, char *str, int n)
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

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (!input_s(argv[1][i], &argv[1][0], i) &&
				input(argv[1][i], &argv[2][0]))
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

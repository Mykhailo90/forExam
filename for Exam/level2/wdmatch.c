/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 21:00:06 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 22:07:18 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int search(char ch, char *str, int z)
{
	int		i;

	i = z;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		flag;
	int		s;
	int		len;

	i = 0;
	s = 0;
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		len = ft_strlen(&argv[1][0]);
		while (argv[1][i] != '\0')
		{
			s = search(argv[1][i], &argv[2][0], s);
			if (s >= 0)
				len--;
			i++;
		}
		if (len == 0)
			ft_putstr(&argv[1][0]);
		write(1, "\n", 1);
	}
	return (0);
}

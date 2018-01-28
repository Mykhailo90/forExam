/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:34:08 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/28 13:33:54 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int				is_space(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\f' ||
		ch == '\r' || ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

int				s_len(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int				main(int argc, char **argv)
{
	int			i;
	int			z;
	int			f;

	i = 0;
	f = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		z = (s_len(argv[1]) - 1);
		while (is_space(argv[1][z]))
			z--;
		while (is_space(argv[1][i]))
			i++;
		while (i <= z)
		{
			if (!is_space(argv[1][i]))
				ft_putchar(argv[1][i]);
			else if (!is_space(argv[1][i + 1]))
				write(1, "   ", 3);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

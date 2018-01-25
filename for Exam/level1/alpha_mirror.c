/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:20:02 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/23 16:59:09 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void		print_fp(char ch)
{
	char	t;
	int		i;

	t = 'a';
	i = 0;
	if (ch >= 'A' && ch <= 'M')
		t = 'A';
	while (ch != t)
	{
		i++;
		t++;
	}
	if (ch >= 'A' && ch <= 'M')
		ft_putchar('Z' - i);
	else if (ch >= 'a' && ch <= 'm')
		ft_putchar('z' - i);
}

void		print_sp(char ch)
{
	char	t;
	int		i;

	t = 'z';
	i = 0;
	if (ch >= 'N' && ch <= 'Z')
		t = 'Z';
	while (ch != t)
	{
		i++;
		t--;
	}
	if (ch >= 'N' && ch <= 'Z')
		ft_putchar('A' + i);
	else
		ft_putchar('a' + i);
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
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'm') ||
				(argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				print_fp(argv[1][i]);
			else if ((argv[1][i] >= 'n' && argv[1][i] <= 'z') ||
					(argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
				print_sp(argv[1][i]);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

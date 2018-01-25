/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 12:04:53 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/23 13:46:08 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_letter(char ch, int count)
{
	if (ch)
		while (count--)
			write(1, &ch, 1);
}

void		print_symbols(char ch)
{
	int		i;
	char	symb;

	symb = 'a';
	i = 1;
	if (ch >= 'A' && ch <= 'Z')
		symb = symb - 32;
	if ((ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z'))
	{
		while (ch != symb)
		{
			i++;
			symb++;
		}
		ft_print_letter(ch, i);
	}
	else
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
			print_symbols(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

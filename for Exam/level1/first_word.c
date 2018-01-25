/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 20:27:41 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/22 21:17:47 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			is_space(char ch)
{
	if (ch == '\n' || ch == ' ' || ch == '\t' || ch == '\v' ||
		ch == '\r' || ch == '\f')
		return (1);
	else
		return (0);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i] != '\0' || !is_space(argv[1][i]))
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

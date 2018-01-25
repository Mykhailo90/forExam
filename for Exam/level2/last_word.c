/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:57:50 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 16:16:12 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			is_space(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\f' || ch == '\r' ||
		ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			main(int argc, char **argv)
{
	int		i;
	int		len;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		len = ft_strlen(&argv[1][0]);
		i = len - 1;
		while (is_space(argv[1][i]) && i)
			i--;
		len = i;
		while (!is_space(argv[1][i]))
			i--;
		while (++i <= len)
			ft_putchar(argv[1][i]);
		write(1, "\n", 1);
	}
	return (0);
}

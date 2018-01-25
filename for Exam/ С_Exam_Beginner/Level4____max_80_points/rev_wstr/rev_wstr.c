/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 12:48:15 by exam              #+#    #+#             */
/*   Updated: 2017/02/07 13:24:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_print(char *s)
{
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (!(*s == ' ' || *s == '\n' || *s == '\t') && *s)
	{
		write(1, s, 1);
		s++;
	}
}

int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void	ft_rev(char *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
			i--;
		while (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
			i--;
		ft_print(&s[i]);
		if (i > 0)
			write(1, " ", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_rev(argv[1]);
	write(1, "\n", 1);
	return (0);
}

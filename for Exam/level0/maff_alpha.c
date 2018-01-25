/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 17:06:19 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/22 17:54:34 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			main(void)
{
	char	ch;
	int		i;

	ch = 'a';
	i = 1;
	while (ch <= 'z')
	{
		if (i % 2 == 0)
			ft_putchar(ch - 32);
		else
			write(1, &ch, 1);
		i++;
		ch++;
	}
	write(1, "\n", 1);
	return (0);
}

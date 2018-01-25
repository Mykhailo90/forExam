/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff-revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 18:06:34 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/22 18:15:47 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int			main(void)
{
	char	ch;
	int		i;

	ch = 'z';
	i = 1;
	while (ch >= 'a')
	{
		if (i % 2 == 0)
			ft_putchar(ch - 32);
		else
			ft_putchar(ch);
		i++;
		ch--;
	}
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:01:55 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/23 14:15:18 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
		while (str[i] != '\0')
			i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		len = ft_strlen(&argv[1][0]);
		while (len)
		{
			ft_putchar(argv[1][len - 1]);
			len--;
		}
		write(1, "\n", 1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:35:31 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/22 14:56:03 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				main(int argc, char **argv)
{
	int			i;
	int			flag;

	flag = 0;
	i = 0;
	if (argc != 2)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i++] == 'a')
			flag = 1;
	}
	if (flag)
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 10:46:45 by exam              #+#    #+#             */
/*   Updated: 2016/12/13 11:04:10 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ispresent(char *s, int i)
{
    int     k;

    k = 0;
    while (k < i)
    {
        if (s[k] == s[i])
            return (1);
        k++;
    }
    return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (ispresent(argv[1], i) == 0)
		{
			while(argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			j = 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

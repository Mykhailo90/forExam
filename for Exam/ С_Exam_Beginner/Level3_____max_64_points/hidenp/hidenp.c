/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 19:40:01 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/02/05 19:51:42 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void		hidenp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a == *b)
			a++;
		b++;
	}
	if (*a == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
    write(1,"\n", 1);
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 15:35:32 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/02/06 17:47:53 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    to_up(char c)
{
    if (c >= 'a' && c <= 'z')
        c -= 32;
	write(1, &c , 1);
}
void    to_lower(char  c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    write(1, &c , 1);
}

void    ft_cap(char *s)
{
    while (*s)
    {
        while ((*s == ' ' || *s == '\t' || *s == '\n' ) && *s)
			to_up(*s++);
        to_up(*s++);
        while (!((*s == ' ' || *s == '\t' || *s == '\n' )) && *s)
			to_lower(*s++);
        if (*s)
			to_up(*s++);
    }
    write(1,"\n", 1);
}
int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac > 1)
		while(++i < ac)
			ft_cap(av[i]);
	else
		write(1, "\n", 1);
	return (0);
		
}

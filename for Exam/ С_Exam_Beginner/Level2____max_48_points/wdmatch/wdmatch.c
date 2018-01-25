/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 12:51:49 by exam              #+#    #+#             */
/*   Updated: 2016/12/27 13:27:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pstr(char **argv)
{
	int i;
	char c;
	
	i = 0;
	while (argv[1][i] != '\0')
	{
		c = argv[1][i];
		write(1, &c , 1);
		i++;
	}
	write (1, "\n", 1);
}

int	main(int argc,char** argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0' && argv[2][j] !='\0')
	{
		if (argv[1][i] == argv[2][j])
			i++;
		if (argv[1][i] == '\0')
			ft_pstr(argv);
		j++;
	}
	if (argv[2][j] == '\0' && argv[1][i] != '\0')
		write(1, "\n", 1);
	return (0);
}

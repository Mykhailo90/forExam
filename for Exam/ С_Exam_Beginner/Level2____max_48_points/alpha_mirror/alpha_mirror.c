/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 10:02:44 by exam              #+#    #+#             */
/*   Updated: 2017/01/24 11:35:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void print(char* av,char c)
{
	while(*av)
	{
		if(*av >= 'A' && *av <= 'Z')
			c = 155 - *av;
		else if(*av >= 'a' && *av <= 'z')
			c = 219 - *av;
		if ((*av >= 'A' && *av <= 'Z') || (*av >= 'a' && *av <= 'z'))
			write(1,&c,1);
		else
			write(1,av,1);
		av++;
	}
}
int main(int argc, char** argv)
{
	if (argc == 2)
		print(argv[1],argv[1][0]);
	write(1, "\n", 1);
	return (0);
}

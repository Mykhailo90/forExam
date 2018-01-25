/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:17:46 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/13 19:21:41 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s,int i)
{
    while(*s++)
        i++;
    return (i);
}
int end_of_last_word(char *argv, int j)
{
    while (argv[j] == ' ' || argv[j] == '\n' || argv[j] == '\t' || argv[j] == '\0')
        j--;
    j++;
    return (j);
}
int first_word(char *argv, int i)
{
    while (argv[i] == ' ' || argv[i] == '\t' || argv[i] == '\n')
        i++;
    return (i);
}
int main(int ac, char **av)
{
    int i;
    int j;

    i = first_word(av[1],0);
    j = end_of_last_word(av[1],ft_strlen(av[1],0));
    if (ac < 3)
    {
        while (i < j)
        {
            if ((av[1][i] != ' ' || av[1][j] != '\n' || av[1][i] != '\t') && i < j)
            {
                write(1,&av[1][i],1);
                i++;
            }
            if ((av[1][i] == ' ' || av[1][i] == '\n' || av[1][i] == '\t')&& i < j)
            {
                write(1," ",1);
                i++;
            }
            while ((av[1][i] == ' ' || av[1][i] == '\n' || av[1][i] == '\t')&& i < j)
                i++;
        }
    }
    write (1,"\n",1);
    return (0);
}

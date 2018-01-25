/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 10:03:07 by exam              #+#    #+#             */
/*   Updated: 2017/01/17 10:49:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//for printf

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
int main()
{
	char *s1 = "f82F6hxtk4";
	char *s2 = "f82F6hxtk4";
	printf("%d\n",ft_strcmp(s1,s2));

}
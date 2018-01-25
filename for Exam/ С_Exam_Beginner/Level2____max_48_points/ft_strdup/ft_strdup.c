/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:59:52 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/23 16:03:24 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//printf
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char *ft_strdup(const char *src)
{
	char *s1;
	int i;
	int len;

	i = 0;
	len = ft_strlen((char*)src);
	if (!(s1 = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
int main()//check
{
	char s[]= "dratute";
	printf("%s",ft_strdup((const char *)s));
}

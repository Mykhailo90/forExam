/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 17:22:10 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/23 17:33:41 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>//for main

int	ft_atoi(const char *str)
{
	int numb;
	int sign;

	numb = 0;
	sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		numb *= 10;
		numb += *str - '0';
		str++;
	}
	return (numb * sign);
}

int main()
{
	char* s = "     -1223";
	printf("%d",ft_atoi(s));
}

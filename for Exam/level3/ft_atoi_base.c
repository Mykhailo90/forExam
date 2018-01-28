/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 16:43:03 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/28 19:35:22 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_input(int len, char *base, char *base2, char ch)
{
	int		i;
	int		n;

	i = 0;
	while (i < len)
	{
		if (ch == base[i] || ch == base2[i])
			return (1);
		i++;
	}
	return (0);
}

int		read_number(char *base, char * base2, const char *str, int sb)
{
	int		i;
	int		tmp;
	int		res;
	int		st;
	int		sb1;
	
	tmp = 0;
	i = 0;
	while (str[i] != '\0' && ft_input(sb, base, base2, str[i]))
		i++;
	printf("i = %d\n", i);
	while (--i >= 0)
	{
		sb1 = sb;
		st = i;
		printf("st = %d\n", st);
		if (str[i] >= 'a' && str[i] <= 'f')
			tmp = str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			tmp = str[i] - 'A' + 10;
		else
			tmp = str[i] - '0';
		printf("tmp = %d\n", tmp);
		if (i == 0)
			sb1 = 1;
		else
			while (st-- > 1)
				sb1 = sb1 * sb1;
		printf("sb = %d\n", sb1);
		tmp = sb * tmp;
		res += tmp;
	}
	return (res);
}

int			ft_atoi_base(const char *str, int str_base)
{
	char	*base;
	char	*base2;
	int		res;
	int		flag;
	
	flag = 0;
	base = "0123456789abcdef";
	base2 = "0123456789ABCDEF";
	while (*str == ' ' || *str == '\n' || *str == '\r' ||
		*str == '\t' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
	{
		flag = 1;
		str++;
	}
	res = read_number(base, base2, str, str_base);
	return ((flag) ? -res : res);
}

int			main(void)
{
	char *number = "234";
	int base = 8;
	printf("8b = %s\n", number);
	printf("10b = %d\n", ft_atoi_base(number, base));
	return (0);
}

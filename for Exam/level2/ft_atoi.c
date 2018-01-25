/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:32:56 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 11:05:33 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_space(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\f' || ch == '\r' ||
		ch == '\t' || ch == '\v')
		return (1);
	return (0);
}

int		count_num(char *str)
{
	int	num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num *= 10;
		num += *str - '0';
		str++;
	}
	return (num);
}

int		ft_atoi(const char *str)
{
	int f;
	int res;

	f = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
		f = 1;
	if (*str == '-' || *str == '+')
		str++;
	res = count_num((char *)str);
	if (f)
		res = -res;
	return (res);
}

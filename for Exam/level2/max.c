/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:26:46 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 16:41:18 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	int	res;
	int	i;

	i = len - 1;
	res = tab[i];
	while (i)
	{
		if (tab[i] > res)
			res = tab[i];
		i--;
	}
	return (res);
}

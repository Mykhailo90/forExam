/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 10:03:38 by exam              #+#    #+#             */
/*   Updated: 2017/02/14 11:21:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					good_sorted(int *tab, unsigned	int size)
{
	unsigned int	sort;
	unsigned int	i;

	i = 0;
	sort = 0;
	while (i <= size - 1)
	{
		if (tab[i] <= tab[i + 1] && i < size - 1)
			sort++;
		i++;
	}
	if (sort == size - 1)
		return (0);
	return (1);
}

void				sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] >= tab[i + 1] && i < size - 1)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
		}
		i++;
		if (i == size)
			if (good_sorted(tab, size))
				i = 0;
	}
}

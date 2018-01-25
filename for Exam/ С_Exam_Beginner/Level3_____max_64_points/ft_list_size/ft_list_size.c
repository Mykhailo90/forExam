/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 11:11:06 by exam              #+#    #+#             */
/*   Updated: 2016/12/13 11:15:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;

	i = 0;
	if (!begin_list)
		return (0);
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

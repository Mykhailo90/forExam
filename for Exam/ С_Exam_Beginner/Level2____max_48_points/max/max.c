/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:35:27 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/01/23 15:40:30 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	i = 0;
	max = tab[i];
	while(i < len)
	{
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return(max);
}

int main()
{
	int tab[] = {1,3,6,7,9,343,23,344};
	printf("max arr numb -->%d\n",max(tab,8));
}

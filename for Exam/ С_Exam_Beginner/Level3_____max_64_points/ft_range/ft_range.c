/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 17:56:05 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/02/05 18:03:45 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int			*ft_range(int start, int end)
{
	int		*arr;
	int		i;
	int		len;

	i = 0;
	len = end > start ? end - start + 1 : start - end + 1;
	arr = (int *)malloc(sizeof(int) * len);
	if (start < end)
		while (i < len)
			arr[i++] = start++;
	while (i < len)
		arr[i++] = start--;
	return (arr);
}

/*
FOR CHECKING
*/
 
void ft_print(int *arr, int num, int i)
{
	printf("min %d max %d\n", arr[0], arr[num - 1]);
	while (i < num)
		printf("%d\n", arr[i++]);
}

int			main(void)
{
	int		start;
	int		end;
	int		len;

	printf("enter the start--->");
	scanf("%d", &start);
	printf("enter the end---->");
	scanf("%d", &end);
	len = end > start ? end - start + 1 : start - end + 1;
	ft_print(ft_range(start, end), len, 0);
	return (0);
}

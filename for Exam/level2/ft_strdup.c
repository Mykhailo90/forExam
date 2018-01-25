/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:06:32 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 11:33:27 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *src)
{
	int		i;

	i = 0;
	if (src)
		while (*src++ != '\0')
			i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(src);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}

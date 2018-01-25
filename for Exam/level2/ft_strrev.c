/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarapii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:35:43 by msarapii          #+#    #+#             */
/*   Updated: 2018/01/24 12:24:30 by msarapii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (str)
		while (str[i] != '\0')
			i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	char	*res;
	char	ch;
	int		len;
	int		i;

	i = 0;
	res = str;
	len = ft_strlen(res);
	while (i < (len / 2))
	{
		ch = res[i];
		res[i] = res[len - 1 - i];
		res[len - 1 - i] = ch;
		i++;
	}
	return (str);
}

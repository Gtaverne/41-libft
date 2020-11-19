/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:05:00 by user42            #+#    #+#             */
/*   Updated: 2020/11/19 10:20:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_countw(char const *str, char c)
{
	unsigned int	count;

	count = 0;
	if (*str && *str != c)
		++count;
	while (*str)
	{
		if (*str == c)
		{
			while (*str && *str == c)
				++str;
			if (*str)
				++count;
		}
		else
			++str;
	}
	return (count + 1);
}

static unsigned int		ft_lenw(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] && str[i] != c)
	{
		++i;
		++len;
	}
	return (len + 1);
}

char					**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		w;
	int		x;

	res = ft_calloc(ft_countw(s, c), sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	w = -1;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			++i;
		if (s[i])
			res[++w] = ft_calloc(ft_lenw(s, c, i), sizeof(char));
		if (s[i] && res[w])
		{
			x = 0;
			while (s[i] && s[i] != c)
				res[w][x++] = s[i++];
		}
	}
	res[++w] = NULL;
	return (res);
}

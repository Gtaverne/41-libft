/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:15:43 by user42            #+#    #+#             */
/*   Updated: 2020/11/19 10:23:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isincharset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	start;
	unsigned int	end;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_isincharset(s1[start], set))
		start++;
	while (ft_isincharset(s1[end - 1], set))
		end--;
	res = ft_calloc((start < end ? end - start : 0) + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (i < end - start)
	{
		res[i] = s1[start + i];
		i++;
	}
	return (res);
}

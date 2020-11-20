/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:15:43 by user42            #+#    #+#             */
/*   Updated: 2020/11/20 15:25:02 by user42           ###   ########.fr       */
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

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	if (!s1[0])
		return ("");
	while (ft_isincharset(s1[start], set) && start < end)
		start++;
	while (ft_isincharset(s1[end - 1], set) && start < end)
		end--;
	if (!(res = malloc((end - start + 1) * sizeof(char))))
		return (NULL);
	while (i < end - start && s1[start + i])
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:15:43 by user42            #+#    #+#             */
/*   Updated: 2020/11/20 14:44:49 by user42           ###   ########.fr       */
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
	while (ft_isincharset(s1[start], set) && start < end)
		start++;
	while (ft_isincharset(s1[end - 1], set) && start < end)
		end--;
	res = malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < end - start)
	{
		res[i] = s1[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int main (int argc, char **argv)
{
	if (argc != 3)
		printf ("D'abord S1, puis set\n");
	char *res;

	res = ft_strtrim(argv[1], argv[2]);
	printf("%s\n", res);
}

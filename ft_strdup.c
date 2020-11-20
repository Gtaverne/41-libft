/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 17:37:50 by user42            #+#    #+#             */
/*   Updated: 2020/11/20 12:17:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s) + 1;
	if (!(res = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:59:47 by user42            #+#    #+#             */
/*   Updated: 2020/11/20 12:06:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	if (size <= dst_len)
		return (size + ft_strlen(src));
	while (src[i] && dst_len + i < (size - 1))
	{
		dst[dst_len + i] = src[i];
		++i;
	}
	dst[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}

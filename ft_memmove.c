/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:14:02 by user42            #+#    #+#             */
/*   Updated: 2020/11/20 11:37:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	i = 0;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (n == 0 && !dest && !src)
		return (NULL);
	if (cdest > csrc)
		while (i < n)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	return (dest);
}

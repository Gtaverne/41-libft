/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:16:29 by user42            #+#    #+#             */
/*   Updated: 2020/11/19 15:18:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *res;

	res = (t_list *)malloc(sizeof(*res));
	if (!res)
		return (NULL);
	res->content = (void *)content;
	res->next = NULL;
	return (res);
}

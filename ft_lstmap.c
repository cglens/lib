/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 18:04:01 by cglens            #+#    #+#             */
/*   Updated: 2015/12/16 21:22:14 by cglens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = NULL;
	(*new) = *(t_list*)malloc(lst->content_size);
	while (lst->content)
	{
		new = f(lst);
		new->content_size = lst->content_size;
		new = lst->next;
	}
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cglens <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:48:52 by cglens            #+#    #+#             */
/*   Updated: 2015/12/15 18:56:38 by cglens           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*s;

	if (!(s = (unsigned char *)malloc(sizeof(unsigned char) * (size))))
		return (NULL);
	ft_bzero(s, size);
	return (s);
}

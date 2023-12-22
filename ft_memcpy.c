/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:01:57 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/21 11:43:41 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			l;
	unsigned char	*d;
	unsigned char	*s;

	if (dst == src)
	{
		return (dst);
	}
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	l = 0;
	while (l < n)
	{
		d[l] = s[l];
		l ++;
	}
	return (dst);
}

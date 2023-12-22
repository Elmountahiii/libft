/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:21:42 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/14 15:50:01 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	counter;

	src_len = ft_strlen(src);
	counter = 0;
	if (dstsize != 0)
	{
		while (src[counter] && counter < dstsize -1)
		{
			dst[counter] = src[counter];
			counter ++;
		}
		dst[counter] = '\0';
	}
	return (src_len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:48:13 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/14 15:54:44 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	src_counter;
	size_t	dst_counter;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	src_counter = 0;
	dst_counter = dst_len;
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	while (src[src_counter] != '\0' && dst_counter < dstsize - 1)
	{
		dst[dst_counter] = src[src_counter];
		src_counter ++;
		dst_counter ++;
	}
	dst[dst_counter] = '\0';
	return (dst_len + src_len);
}

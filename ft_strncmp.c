/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:33:17 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/11 12:03:33 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	t;

	t = 0;
	while ((s1[t] != '\0' || s2[t] != '\0') && t < n)
	{
		if (s1[t] != s2[t])
		{
			return ((unsigned char)s1[t] - (unsigned char)s2[t]);
		}
		t ++;
	}
	return (0);
}

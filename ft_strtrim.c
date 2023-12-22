/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:50:05 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/18 18:50:41 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
	{
		return (NULL);
	}
	else if (ft_strlen(s1) == 0 && ft_strlen(set) == 0)
	{
		return (ft_strdup(""));
	}
	else if (ft_strlen(s1) == 0)
	{
		return (ft_strdup(""));
	}
	end = ft_strlen(s1);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start ++;
	while (ft_strchr(set, s1[end]))
		end --;
	return (ft_substr(s1, start, (end - start + 1)));
}

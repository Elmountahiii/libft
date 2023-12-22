/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 12:24:00 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/18 18:53:04 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_join;
	size_t	s1_len;
	size_t	s2_len;
	size_t	counter;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str_join = malloc(s1_len + s2_len + 1);
	counter = 0;
	if (str_join == NULL)
		return (NULL);
	while (s1[counter])
	{
		str_join[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (s2[counter])
	{
		str_join[s1_len + counter] = s2[counter];
		counter ++;
	}
	str_join[s1_len + s2_len] = '\0';
	return (str_join);
}

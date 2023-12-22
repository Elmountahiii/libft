/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 17:45:08 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/18 18:43:40 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	size_t			s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		return (ft_strdup(""));
	}
	if (len >= ft_strlen(s + start))
	{
		return (ft_strdup(s + start));
	}
	i = 0;
	sub_str = malloc(sizeof(char) * len + 1);
	if (!sub_str)
		return (NULL);
	while (s[start + i] && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

// int main()
// {
// 	char *str ="lorem ipsum dolor sit amet";
// 	unsigned int start = 400;
// 	size_t len = 10;
// 	char *result = ft_substr(str,start,len);
// 	if(result != NULL)
// 	{
// 		printf("str is :%s",result);
// 	}else{
// 	printf("Null");
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:06:10 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/18 19:14:49 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**count_words(char const *s, char c)
{
	char	**words_arry;
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i ++;
		}
		else
		{
			while (s[i] && s[i] != c)
			{
				i ++;
			}
			words ++;
		}
	}
	words_arry = malloc(sizeof(char *) * (words + 1));
	return (words_arry);
}

char	**free_arr(char **str, size_t c)
{
	size_t	i;

	i = 0;
	while (i < c)
	{
		free(str[i++]);
	}
	free(str);
	return (NULL);
}

char	*get_str(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
	{
		len ++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s[i] && i < len)
	{
		str[i] = s[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}

char	**add_str_to_words(char **words, const char *s, const char c)
{
	size_t	i;
	size_t	array_count;

	i = 0;
	array_count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i ++;
		}
		else
		{
			words[array_count] = get_str(&s[i], c);
			if (!words[array_count])
				return (free_arr(words, array_count));
			array_count++;
			while (s[i] && s[i] != c)
			{
				i ++;
			}
		}
	}
	words[array_count] = 0;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = count_words(s, c);
	if (!words)
	{
		return (NULL);
	}
	return (add_str_to_words(words, s, c));
}

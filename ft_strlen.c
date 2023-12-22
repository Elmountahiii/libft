/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:56:54 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/08 18:20:11 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i ++;
	}
	return (i);
}

// int main ()
// {
// 	const char * t ="";
// 	printf("dyali :%lu \n",ft_strlen(t));
// 	printf("dyalhom :%lu \n",strlen(t));	
// }pa
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:46:27 by yel-moun          #+#    #+#             */
/*   Updated: 2023/12/08 16:09:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= 48 && d <= 57)
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	char t ='2';
// 	printf("%d \n",ft_isdigit(t));
// 	printf("%d \n",isdigit(t));

// }
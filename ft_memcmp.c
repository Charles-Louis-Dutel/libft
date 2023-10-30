/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:40:52 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 10:20:21 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*str1;
	const char		*str2;
	unsigned long	i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	//char *c1 = "s-erre";
	//char *c2 = "s-erre";
	//int size = sizeof(char) * 150;

	int array1 [] = { 54, 85, 20, 63, 21 };
	int array2 [] = { 54, 85, 20, 63, 21 };
	size_t size = sizeof( int ) * 5;
	__builtin_printf("%d\n", memcmp(array1, array2, size));
	__builtin_printf("%d\n", ft_memcmp(array1, array2, size));
	return(0);
}*/

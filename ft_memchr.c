/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:50:52 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 10:20:16 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *str = "";
	const char *str2 = "";
	__builtin_printf("%s\n", (char*)memchr(str, 'r', 5));
	__builtin_printf("%s\n", (char*)ft_memchr(str2, 'r', 5));
	return(0);
}*/

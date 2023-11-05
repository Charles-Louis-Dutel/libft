/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:50:52 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/31 14:49:37 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	unsigned int	i;
	unsigned char	a;

	a = c;
	if (s == NULL)
		return (NULL);
	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	//const char *str = "";
	//const char *str2 = "";
	char s1[] = {0, 1, 2 ,3 ,4 ,5};
	char s2[] = {0, 1, 2 ,3 ,4 ,5};
	void * found = memchr(s1, 2 + 256, 3);
	__builtin_printf("%d\n", *((char *) found));
	void * found2 = ft_memchr(s2, 2 + 256 , 3);
	__builtin_printf("%d\n", *((char *) found2));
	//__builtin_printf("%s\n", (char *)memchr(s1, 0, 1));
	//__builtin_printf("%s\n", (char *)ft_memchr(s2, 0, 1));

	return(0);
}*/

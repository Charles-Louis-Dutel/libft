/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:28:07 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/31 18:21:55 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long int	i;
	unsigned long int	index;

	index = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[index] && index < len)
	{
		if (big[index] == little[0])
		{
			i = 1;
			while (little[i] && little[i] == big[i + index] && (index
					+ i) < len)
			{
				i++;
			}
			if (little[i] == '\0')
				return ((char *)&big[index]);
		}
		index++;
	}
	return (0);
}
/*
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	//char *empty = (char *)"";

	__builtin_printf("%s\n", strnstr(haystack, "a", 1));
	__builtin_printf("%s\n", ft_strnstr(haystack, "a", 1));
	return (0);
}*/

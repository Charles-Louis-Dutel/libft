/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:39:22 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/31 15:40:08 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_remplir_str(char const *s, char *str, unsigned int start,
		size_t len)
{
	unsigned int	i;

	i = 0;
	while (s[start])
	{
		if (i < len)
		{
			str[i] = s[start];
			i++;
		}
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = ft_strlen(s);
	if (start > i)
	{
		str = (char *)malloc(sizeof(char) * 1);
		*str = '\0';
		return (str);
	}
	if (len < i)
		str = (char *)malloc(sizeof(char) * (len + 1));
	else
		str = (char *)malloc(sizeof(char) * (i - start + 1));
	if (!str)
		return (NULL);
	ft_remplir_str(s, str, start, len);
	return (str);
}
/*
int	main(void)
{
	__builtin_printf("%s\n", ft_substr("test", 1, 2));
	return (0);
}*/

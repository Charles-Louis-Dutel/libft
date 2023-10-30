/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:45 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 19:00:38 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ("\0");
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *s = "tripouille";

	__builtin_printf("%s\n", strchr(s, 0));
	__builtin_printf("%s\n", ft_strchr(s, 0));
	return 0;
}*/

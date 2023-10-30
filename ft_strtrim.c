/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:38:18 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 10:24:42 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		start;
	int		end;

	i = 0;
	while (ft_compare(s1[i], set) == 1)
		i++;
	start = i;
	i = ft_strlen(s1);
	while (ft_compare(s1[i - 1], set) == 1)
		i--;
	end = i;
	dest = (char *)malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (start < end)
	{
		dest[i] = s1[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:28:07 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 10:24:33 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int					i;
	unsigned long int	j;
	int					dif;

	j = -1;
	if (*little == '\0')
		return ((char *)big);
	while (*big && ++j < len - 1 && len > 0)
	{
		if (*big == *little)
		{
			i = 0;
			dif = 0;
			while (little[i])
			{
				if (little[i] != big[i])
					dif = 1;
				i++;
			}
			if (dif == 0)
				return ((char *)big);
		}
		big++;
	}
	return (0);
}

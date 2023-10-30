/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:04:37 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 19:00:49 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned long int	i;
	unsigned long int	j;
	unsigned long int	len_dst;
	unsigned long int	len_src;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	len_dst = i;
	while (src[j])
		j++;
	len_src = j;
	j = 0;
	while (src[j] && j < size - len_dst - 1 && size > len_dst)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < len_dst)
		return (size + len_src);
	return (len_dst + len_src);
}

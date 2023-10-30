/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:56:59 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 19:00:23 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long	i;
	const char		*to_copy;
	char			*copy;

	to_copy = src;
	copy = dest;
	if (copy > to_copy)
	{
		while (n > 0)
		{
			copy[n - 1] = to_copy[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			copy[i] = to_copy[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	int i;
	//char originale[] = "bonjour";
	int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	for(i=0; i<10; i++)
		printf("%d ", data[i]);
	printf("\n");

	void *source = (void *) data;
	void *destination = (void *) (data+1);
	unsigned long size = sizeof(int *) * 10;
	//memmove (destination, source, size);
	ft_memmove (destination, source, size);

	for(i=0; i<10; i++)
		printf("%d ", data[i]);
	printf("\n");

	data[0] = 10;
	for(i=0; i<10; i++)
		printf("%d ", data[i]);
	printf("\n");

	return(0);
}*/

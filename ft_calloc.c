/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:48:46 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/30 10:19:03 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*tab;
	unsigned int	i;

	tab = (char *)malloc(size * nmemb);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}
/*
int	main(void)
{
	int i;
	int * pointer = (int *) calloc( 10, sizeof(int) );
	for (i=0; i<10; i++ ) {
		printf( "%d ", pointer[i] );
	}
	printf( "\n" );
	for ( i=0; i<10-1; i++ ) {
		pointer[i] = i;
	}
	for (i=0; i<10; i++ ) {
		printf( "%d ", pointer[i] );
	}
	printf( "\n\n" );


	int *pointer2 = (int *) ft_calloc( 10, sizeof(int) );
	for (i=0; i<10; i++ )
		printf( "%d ", pointer2[i] );
	printf( "\n" );
	for ( i=0; i<10-1; i++ )
		pointer2[i] = i;
	for (i=0; i<10; i++ )
		printf( "%d ", pointer2[i] );
	printf( "\n" );

	free( pointer );
	free( pointer2 );
	return (0);
}*/

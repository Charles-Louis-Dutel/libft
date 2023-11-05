/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:20:52 by cdutel            #+#    #+#             */
/*   Updated: 2023/10/31 17:07:39 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countword(char const *s, char c)
{
	int	i;
	int	nb_mot;

	i = 0;
	nb_mot = 0;
	while (s[i])
	{
		if (i == 0 && s[0] != c)
			nb_mot++;
		else if (s[i] != c && s[i - 1] == c)
			nb_mot++;
		i++;
	}
	return (nb_mot);
}

char	*ft_remplir_tab(char const *s, char *tab, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		tab[i] = s[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_remplir_dest(char **dest, char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	*tab;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		tab = (char *)malloc(sizeof(char) * (i - start + 1));
		if (!tab)
			return (NULL);
		dest[j] = ft_remplir_tab(s, tab, start, i);
		j++;
		while (s[i] == c)
			i++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		nb_mot;

	nb_mot = ft_countword(s, c);
	dest = (char **)malloc(sizeof(char *) * nb_mot + 1);
	if (!dest)
		return (NULL);
	ft_remplir_dest(dest, s, c);
	return (dest);
}
/*
int	main(void)
{
	char const *s = "  tripouille  42  ";
	char **test;
	int i;

	test = ft_split(s, ' ');
	i = 0;
	while (i < 5)
	{
		__builtin_printf("%s\n", test[i]);
		i++;
	}
	return (0);
}*/

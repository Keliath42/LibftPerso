/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 13:15:21 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/10 16:36:46 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memlib(char **tab);

static int	count_words(char const *s, char c)
	{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c)
		{
			if (s[i] != '\0')
				i++;
			else
				break ;
		}
	}
	return (count);
}

static char	**write_words(char const *s, char c, int total, char **tab)
{
	int	i;
	int	x;

	i = 0;
	while (total != 0)
	{
		x = 0;
		while (s[x] && s[x] == c)
			s++;
		while (s[x] && s[x] != c)
			x++;
		tab[i] = ft_substr(s, 0, x);
		if (!tab[i])
		{
			memlib(tab);
			return (NULL);
		}
		s += x;
		i++;
		total--;
	}
	tab[i] = 0;
	return (tab);
}

static void	memlib(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
		i++;
	while (i > 0)
	{
		free(tab[--i]);
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		total;

	total = count_words(s, c);
	tab = malloc((total + 1) * sizeof(char *));
	tab = write_words(s, c, total, tab);
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char **tab;
	int i = 0;
	char str[] = "Vive la NFL, go LA Rams !";
	tab = ft_split(str, 'z');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/

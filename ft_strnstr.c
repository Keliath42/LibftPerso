/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 09:47:54 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/05 15:51:57 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	length;

	i = 0;
	x = 0;
	length = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)(big));
	while (*big && i < len)
	{
		x = 0;
		while (big[i] && big[i] == little[x] && i < len)
		{
			i++;
			x++;
		}
		if (len - i > length || len < length)
			break;
		if (x == length)
			return ((char *)big);
		i = 0;
		big += 1;
	}
	return (NULL);
}

/*#include <stdio.h>

int main(void)
{
	char *str = "aaabcabcd";
	printf("%p\n", ft_strnstr(str, "cd", 8));
	printf("%p\n", strnstr(str, "cd", 8));
	return (0);
}*/

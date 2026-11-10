/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:46:44 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/10 12:11:09 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*dest;
	size_t	len_s;

	i = start;
	x = 0;
	len_s = ft_strlen(s);
	if (len_s <= start)
		return (ft_strdup(""));
	else if (len_s - start < len)
		dest = malloc(sizeof(char) * (len_s - start) + 1);
	else
		dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s[i] && x < len)
	{
		dest[x] = s[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

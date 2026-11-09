/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 11:49:46 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 10:12:50 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	x;
	size_t	len_src;
	size_t	len_dst;

	x = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = len_dst;
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (src[x] && (dstsize - len_dst > 1))
	{
		dst[i] = src[x];
		i++;
		x++;
		dstsize--;
	}
	dst[i] = '\0';
	return (len_dst + len_src);
}

/*#include <stdio.h>

int main(void)
{
	char buffer[30];
	ft_memset(buffer, 0, 30);
	printf("%zu\n", ft_strlcat(buffer, "123", 2));
	return 0;
}*/

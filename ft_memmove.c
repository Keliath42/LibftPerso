/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:48:37 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/04 16:19:39 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char *temp_dest;
	const unsigned char *temp_src;

	temp_dest = dest;
	temp_src = src;
	if (src > dest)
		return (ft_memcpy(dest, src, count));
	else if (src == dest)
		return (dest);
	while (count > 0)
	{
		count--;
		temp_dest[count] = temp_src[count];
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "ABCDEF";
	printf("%s\n", str);
	ft_memmove(str, str, 3);
	printf("%s\n", str);
	return (0);
}*/

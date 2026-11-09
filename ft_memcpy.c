/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:21:46 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 13:37:56 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t				i;
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	i = 0;
	while (i < count)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}

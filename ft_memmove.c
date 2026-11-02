/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 18:48:37 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/02 19:12:34 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	if (src > dest)
		return (ft_memcpy(dest, src, count));
	while (count != 0)
	{
		(unsigned char *)dest[count] = (unsigned char *)src[count];
		count--;
	}
	return (dest);
}

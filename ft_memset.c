/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:45:58 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/03 18:13:54 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	i;
	unsigned char *temp;

	i = 0;
	temp = (unsigned char *)dest;
	while (i < count)
	{
		temp[i] = (unsigned char)ch;
		i++;
	}
	return (dest);
}

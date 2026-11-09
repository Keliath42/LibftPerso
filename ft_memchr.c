/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:51:21 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 13:40:30 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t				i;
	const unsigned char	*temp;

	i = 0;
	temp = ptr;
	while (i != count)
	{
		if ((unsigned char)ch == temp[i])
			return ((unsigned char *)(temp + i));
		i++;
	}
	return (NULL);
}

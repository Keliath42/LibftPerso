/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:22:44 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 12:13:40 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (size == 0 || count == 0)
		tmp = malloc(0);
	if (SIZE_MAX / count < size && SIZE_MAX / size < count)
		return (NULL);
	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}

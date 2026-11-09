/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:05:52 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 13:40:51 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *lhs, const void *rhs, size_t count)
{
	size_t				i;
	const unsigned char	*temp_lhs;
	const unsigned char	*temp_rhs;

	i = 0;
	temp_lhs = lhs;
	temp_rhs = rhs;
	while (i != count)
	{
		if (temp_lhs[i] != temp_rhs[i])
			return (temp_lhs[i] - temp_rhs[i]);
		i++;
	}
	return (0);
}

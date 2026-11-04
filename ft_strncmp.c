/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:19:23 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/04 18:49:30 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
	size_t	i;
	const unsigned char	*temp_lhs;
	const unsigned char	*temp_rhs;

	i = 0;
	temp_lhs = (const unsigned char *)lhs;
	temp_rhs = (const unsigned char *)rhs;
	while (i != count)
	{
		if(temp_lhs[i] != temp_rhs[i] || temp_lhs[i] == '\0' || temp_rhs[i] == '\0')
			return (temp_lhs[i] - temp_rhs[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char *str1 = "abc";
	char *str2 = "abcdef";
	printf("%d\n", ft_strncmp(str1, str2, 10));
	return (0);
}*/

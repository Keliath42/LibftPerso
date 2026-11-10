/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:08:40 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/10 16:37:45 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	x;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	x = len - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (x > i && ft_strchr(set, s1[x]))
		x--;
	return (ft_substr(s1, i, (x - i + 1)));
}

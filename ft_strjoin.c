/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:12:02 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 16:01:05 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		len_s1;
	int		len_s2;
	int		dest_size;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dest_size = len_s1 + len_s2;
	dest = ft_calloc((dest_size + 1) , sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcat(dest, s1, dest_size + 1);
	ft_strlcat(dest, s2, dest_size + 1);
	return (dest);
}

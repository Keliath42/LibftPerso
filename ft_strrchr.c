/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:22:53 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 13:41:44 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t		i;
	const char	*temp;

	i = 0;
	temp = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)ch)
			temp = (char *)(&str[i]);
		i++;
	}
	if ((char)ch == '\0')
		return ((char *)(&str[i]));
	return ((char *)(temp));
}

/*#include <stdio.h>

int	main(void)
{
	char *str = "Hello World";
	printf("%s\n", ft_strrchr(str, '\0'));
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:12:58 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/09 11:21:52 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi("	\t--+-+154ab567"));
	printf("%d\n", ft_atoi("	\t-154ab567"));
	printf("%d\n", ft_atoi("	\t+154ab567"));
	printf("%d\n", ft_atoi("	\t154ab567"));
	return (0);
}*/

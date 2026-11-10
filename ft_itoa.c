/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:40:38 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/10 16:59:15 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_nb(int n)
{
	int	nb;

	while(n != 0)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	int		nb;
	char	*str;

	sign = 1;
	len = len_nb(n);
	if(n < 0)
	{
		sign = -sign;
		len++;
	}
	str = malloc(len * sizeof(char) + 1);
	str[len] = '\0';
	len--;
	while(len > 0)
	{

		nb = n % 10;
		str[len] = nb + 48;
		n /= 10;
		len--;
	}
	if(sign == -1)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int main(void)
{
	char *str;
	int nb = 123456789;
	str = ft_itoa(nb);
	printf("%s\n", str);
	return 0;
}

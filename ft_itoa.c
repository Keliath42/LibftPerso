/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:40:38 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/12 11:49:49 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(int n)
{
	int	nb;

	nb = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nb++;
	while (n != 0)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

static char	*fill_str(char *str, int len, long nb, int sign)
{
	int	mod;

	str[len] = '\0';
	while (--len >= 0)
	{
		mod = nb % 10;
		str[len] = mod + 48;
		nb /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int			len;
	int			sign;
	long		nb;
	char		*str;

	sign = 1;
	len = len_nb(n);
	nb = n;
	if (n < 0)
	{
		sign = -sign;
		nb = -nb;
	}
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str = fill_str(str, len, nb, sign);
	return (str);
}

/*#include <stdio.h>

int main(void)
{
	char *str;
	int nb = -2147483648;
	str = ft_itoa(nb);
	printf("%s\n", str);
	return 0;
}*/

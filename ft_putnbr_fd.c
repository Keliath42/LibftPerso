/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuythor <kevin.puythorac@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 12:21:22 by kpuythor          #+#    #+#             */
/*   Updated: 2026/11/12 13:41:58 by kpuythor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	nbl;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbl = -n;
	}
	else
		nbl = n;
	if (nbl < 10)
	{
		c = nbl + 48;
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(nbl / 10, fd);
		c = nbl % 10 + 48;
		ft_putchar_fd(c, fd);
	}
}

/*int	main(void)
{
	ft_putnbr_fd(1588542, 1);
	ft_putnbr_fd(0, 1);
	ft_putnbr_fd(-5142, 1);
	return (0);
}*/

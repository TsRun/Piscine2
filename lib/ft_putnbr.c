/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maserrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:31:09 by maserrie          #+#    #+#             */
/*   Updated: 2022/11/17 22:52:45 by maserrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char c)
{
	c += '0';
	write(1, &c, 1);
}

void	ft_putnbr2(unsigned int n)
{
	if (n < 10)
		ft_putchar2(n);
	else
	{
		ft_putnbr2(n / 10);
		ft_putchar2(n % 10);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	n = nb;
	ft_putnbr2(n);
}

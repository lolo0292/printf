/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:25:12 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/22 12:01:50 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to print a signed integer
int	ft_putnbr(int n)
{
	int		len;
	char	c;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	len += ft_putchar(c);
	return (len);
}

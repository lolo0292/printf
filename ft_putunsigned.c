/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:26:19 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/22 12:01:59 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to print an unsigned integer
int	ft_putunsigned(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len += ft_putunsigned(n / 10);
	c = (n % 10) + '0';
	len += ft_putchar(c);
	return (len);
}
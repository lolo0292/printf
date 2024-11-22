/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:30:01 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/22 12:01:53 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to print a pointer in hexadecimal format
int	ft_putptr(void *ptr)
{
	int				len;
	unsigned long	addr;

	len = 0;
	addr = (unsigned long)ptr;
	len += ft_putstr("0x");
	if (addr == 0)
		len += ft_putchar('0');
	else
	{
		if (addr >= 16)
			len += ft_puthex(addr / 16, 'x');
		len += ft_putchar("0123456789abcdef"[addr % 16]);
	}
	return (len);
}

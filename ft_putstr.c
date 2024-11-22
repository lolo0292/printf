/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:24:33 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/22 12:01:56 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to write a string to the standard output
int	ft_putstr(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		len += ft_putchar(*str);
		str++;
	}
	return (len);
}

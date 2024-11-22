/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleichtn <lleichtn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:49:36 by lleichtn          #+#    #+#             */
/*   Updated: 2024/11/22 12:02:48 by lleichtn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/* ************************************************************************** */
/* INCLUDES                                                                   */
/* ************************************************************************** */

# include </sgoinfre/goinfre/Perso/lleichtn/repo_git/libft/libft.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <wchar.h>

/* ************************************************************************** */
/* DEFINES                                                                    */
/* ************************************************************************** */

/* ************************************************************************** */
/* STRUCTURES                                                                 */
/* ************************************************************************** */

typedef struct s_flags
{
	int		hash;
	int		zero;
	int		minus;
	int		plus;
	int		space;
}			t_flags;

typedef struct s_format
{
	t_flags	flags;
	int		width;
	int		precision;
	int		length;
	char	type;
}			t_format;

/* ************************************************************************** */
/* PROTO                                                                      */
/* ************************************************************************** */

int			ft_printf(const char *format, ...);
int			ft_putchar(char c);
int			ft_puthex(unsigned int n, char format);
int			ft_putnbr(int n);
int			ft_putstr(char *str);
int			ft_putunsigned(unsigned int n);
int			ft_putptr(void *ptr);

/* ************************************************************************** */
/* DEBUG                                                                      */
/* ************************************************************************** */

#endif
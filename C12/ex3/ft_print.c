/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:59:45 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 12:15:58 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_address(int n)
{
	const char	*base;
	int			div;

	base = "0123456789abcdef";
	div = 0x10000000;
	while (div > 0)
	{
		write(1, &base[(n / div) % 16], 1);
		div /= 16;
	}
}

void	ft_print_hex(char c)
{
	const char	*base;

	base = "0123456789abcdef";
	write(1, &base[(unsigned char)c / 16], 1);
	write(1, &base[(unsigned char)c % 16], 1);
}

void	ft_print_ascii(char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_print_hex_line(char *str, int j, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i == 8)
			write(1, " ", 1);
		if (j + i < size)
		{
			ft_print_hex(str[j + i]);
			write(1, " ", 1);
		}
		else
			write(1, "   ", 3);
		i++;
	}
}

void	ft_print_ascii_line(char *str, int j, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (j + i < size)
			ft_print_ascii(str[j + i]);
		else
			write(1, " ", 1);
		i++;
	}
}

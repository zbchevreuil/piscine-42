/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 16:31:46 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 16:44:19 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*ft_read_stdin(int *size)
{
	char	*str;
	char	buffer[1024];
	int		ret;

	str = NULL;
	*size = 0;
	ret = read(0, buffer, 1024);
	while (ret > 0)
	{
		str = ft_append(str, buffer, size, ret);
		if (!str)
			return (NULL);
		ret = read(0, buffer, 1024);
	}
	return (str);
}

char	*ft_append(char *str, char *buffer, int *size, int len)
{
	char	*tmp;
	int		i;

	tmp = malloc(*size + len + 1);
	if (!tmp)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (i < *size)
	{
		tmp[i] = str[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		tmp[*size + i] = buffer[i];
		i++;
	}
	*size += len;
	tmp[*size] = '\0';
	free(str);
	return (tmp);
}

void	ft_print_stdin_line(char *buffer, int size, int address)
{
	ft_print_address(address);
	write(1, "  ", 2);
	ft_print_hex_line(buffer, 0, size);
	write(1, " |", 2);
	ft_print_ascii_line(buffer, 0, size);
	write(1, "|\n", 2);
}

void	ft_handle_stdin(void)
{
	char	buffer[16];
	int		ret;
	int		size;
	int		address;

	size = 0;
	address = 0;
	ret = read(0, buffer, 16);
	while (ret > 0)
	{
		size += ret;
		if (size == 16)
		{
			ft_print_stdin_line(buffer, 16, address);
			address += 16;
			size = 0;
		}
		ret = read(0, buffer + size, 16 - size);
	}
	if (size > 0)
		ft_print_stdin_line(buffer, size, address);
	address += size;
	ft_print_address(address);
	write(1, "\n", 1);
}

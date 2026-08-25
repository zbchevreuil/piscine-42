/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 15:47:16 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 16:35:16 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_file_size(char *file_name)
{
	int		file;
	int		size;
	char	buffer;

	file = open(file_name, O_RDONLY);
	if (file < 0)
	{
		ft_error(file_name);
		return (-1);
	}
	size = 0;
	while (read(file, &buffer, 1) > 0)
		size++;
	close(file);
	return (size);
}

char	*ft_copy_input(char *file_name, int size)
{
	char	buffer;
	int		i;
	char	*str;
	int		file;

	str = malloc(size + 1);
	if (!str)
		return (NULL);
	file = open(file_name, O_RDONLY);
	if (file < 0)
	{
		free(str);
		return (NULL);
	}
	i = 0;
	while (read(file, &buffer, 1) > 0)
		str[i++] = buffer;
	str[i] = '\0';
	close(file);
	return (str);
}

void	ft_hexdump(char *str, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		ft_print_address(j);
		write(1, "  ", 2);
		ft_print_hex_line(str, j, size);
		write(1, " |", 2);
		ft_print_ascii_line(str, j, size);
		write(1, "|\n", 2);
		j += 16;
	}
	ft_print_address(size);
	write(1, "\n", 1);
	free(str);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 1;
	if (argc < 2)
		return (ft_handle_stdin(), 0);
	if (argv[1][0] == '-' && argv[1][1] == 'C'
		&& argv[1][2] == '\0')
		i++;
	if (i == argc)
		return (ft_handle_stdin(), 0);
	while (i < argc)
	{
		size = ft_file_size(argv[i]);
		if (size >= 0)
		{
			str = ft_copy_input(argv[i], size);
			if (str)
				ft_hexdump(str, size);
		}
		i++;
	}
	return (0);
}

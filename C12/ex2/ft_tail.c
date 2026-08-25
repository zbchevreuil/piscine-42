/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:06:19 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/25 11:45:22 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int	ft_file_size(char *file_name)
{
	int		fd;
	int		size;
	char	c;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		ft_error(file_name);
		return (-1);
	}
	size = 0;
	while (read(fd, &c, 1) > 0)
		size++;
	close(fd);
	return (size);
}

void	ft_display(char *file_name, int size, int bytes)
{
	int		fd;
	int		i;
	int		pos;
	char	*buf;

	(void)size;
	fd = STDIN_FILENO;
	if (file_name)
		fd = open(file_name, O_RDONLY);
	if (file_name && fd < 0)
		return (ft_error(file_name));
	if (bytes <= 0)
		return ;
	buf = malloc(bytes);
	if (!buf)
		return ;
	i = ft_read_file(fd, buf, bytes);
	ft_prepare_buf(&i, bytes, &pos);
	ft_write_buf(buf, i, pos);
	free(buf);
	if (file_name)
		close(fd);
}

void	ft_print_header(int i, char *file_name)
{
	if (i > 3)
		write(1, "\n", 1);
	write(1, "==> ", 4);
	while (*file_name)
		write(1, file_name++, 1);
	write(1, " <==\n", 5);
}

int	main(int argc, char **argv)
{
	int	i;
	int	bytes;
	int	size;

	if (argc < 3 || argv[1][0] != '-' || argv[1][1] != 'c')
		return (1);
	bytes = ft_atoi(argv[2]);
	if (argc == 3)
		return (ft_display(NULL, 0, bytes), 0);
	i = 3;
	while (i < argc)
	{
		if (argc - 3 > 1)
			ft_print_header(i, argv[i]);
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_display(NULL, 0, bytes);
		else
		{
			size = ft_file_size(argv[i]);
			if (size >= 0)
				ft_display(argv[i], size, bytes);
		}
		i++;
	}
	return (0);
}

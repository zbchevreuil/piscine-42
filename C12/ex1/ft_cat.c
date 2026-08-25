/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acayrol <acayrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 11:25:17 by acayrol           #+#    #+#             */
/*   Updated: 2026/08/24 14:59:04 by acayrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	ft_display(int fd)
{
	char	buffer[30000];
	int		ret;

	ret = read(fd, buffer, 30000);
	while (ret > 0)
	{
		write(1, buffer, ret);
		ret = read(fd, buffer, 30000);
	}
	if (ret < 0)
	{
		write(2, "Error while reading.\n", 21);
	}
}

void	ft_file(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(2, "ft_cat: ", 8);
		write(2, filename, strlen(filename));
		write(2, ": ", 2);
		write(2, strerror(errno), strlen(strerror(errno)));
		write(2, "\n", 1);
		return ;
	}
	ft_display(fd);
	close(fd);
}

void	ft_cat(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_display(0);
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_display(0);
		else
			ft_file(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return (0);
}
